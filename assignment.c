#include <stdio.h>
#include <stdlib.h>

void print_menu();
void add_grade();
void edit_grade();
void delete_grade();


int main()
{
	char choice;

	do
	{
		system("clear"); // for unix
		// system("cls"); // for windows
		print_menu();
		scanf("%c%*c", &choice);

		system("clear"); // for unix
		// system("cls"); // for windows

		printf("GRADING MANAGEMENT SYSTEM\n");
		printf("=========================\n\n");

		switch(choice)
		{
			case '1':
				add_grade();
				break;
			case '2':
				edit_grade();
				break;
			case '3':
				delete_grade();
				break;
		}

		if (choice != 'q')
		{
			printf("\n\n---\n");
			printf("Press any key to back to main menu.");
			getchar();
		}
	}
	while (choice != 'q');

	return 0;
}


void print_menu()
{
	printf("GRADING MANAGEMENT SYSTEM\n");
	printf("=========================\n\n");
	printf("1. Add Grade\n");
	printf("2. Edit Grade\n");
	printf("3. Delete Grade\n");
	printf("q. Quit\n\n");
	printf("Enter your choice (1/2/3/q): ");
}


void add_grade()
{
	printf("Write your code here to add new grade.");
}


void edit_grade()
{
	printf("Write your code here to edit grade.");
}


void delete_grade()
{
	printf("Write your code here to delete grade.");
}
