#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 1000

struct SinhVien{ // tao kieu cau truc SinhVien
	int stt;
	char ten[50];
	char tenlop[10];
	char maso[8];
	char gioitinh[3];
	int tuoi;
	float workshop;
	float assignment;
	float pttest;
	float petest;
	float fetest;
	float result;
	char status[6];
};

typedef SinhVien SV; // xac dinh def SV

void print_menu();
void add_grade();
void edit_grade();
void delete_grade();
void finalresult(SV &sv);
void addgradeid(SV a[], int id, int n);
void addgrade(SV &sv, int id);


int main()
{
	int id=0;
	int sosv=0;
	char choice;
	SV arraySV[MAX]; 

	do
	{
		//system("clear"); // for unix
		 system("cls"); // for windows
		print_menu();
		scanf("%c%*c", &choice);

		//system("clear"); // for unix
		 system("cls"); // for windows

		printf("GRADING MANAGEMENT SYSTEM\n");
		printf("=========================\n\n");

		switch(choice)
		{
			case '1':
				id++;
				printf("\n1. Add grade and related information.");
				addgradeid(arraySV,id,sosv);
				printf("\nAdded student's grade successfully!");
				sosv++;
				
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
			printf("\nInvalid input, please try again!");
			printf("\n\n---\n");
			printf("\nPress any key to back to main menu.");
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

void finalresult(SV &sv) {
    sv.result = (0.1*sv.workshop + 0.1*sv.pttest + 0.1*sv.assignment + 0.4*sv.petest + 0.3*sv.fetest);    
}

void status(SV &sv) {
    if(sv.result >= 5 && sv.fetest >=4 && sv.workshop*sv.assignment*sv.pttest > 0)  strcpy(sv.status, "PASSED");
    else strcpy(sv.status, "FAILED");
}

void addgradeid(SV a[], int id, int n)
{
	printf("\nInput student no. %d:", n + 1);
    addgrade(a[n], id);
}

void addgrade(SV &sv, int id)
{
    printf("\nHo va ten: "); fflush(stdin); gets(sv.ten);
    printf("\nNhap gioi tinh: "); gets(sv.gioitinh);
    printf("\nNhap tuoi: "); scanf("%d",&sv.tuoi);
    printf("\nNhap ten lop: "); gets(sv.tenlop);
    printf("\nNhap ma so sinh vien: "); gets(sv.maso);
    printf("\nNhap diem Workshop: "); scanf("%f",&sv.workshop);
    printf("\nNhap diem Progress Test: "); scanf("%f",&sv.pttest);
    printf("\nNhap diem Assignment: "); scanf("%f",&sv.petest);
    printf("\nNhap diem Practical Exam: "); scanf("%f",&sv.petest);
    printf("\nNhap diem Final Exam: "); scanf("%f",&sv.fetest);
    sv.stt = id;
    finalresult(sv);
    status(sv);
}


void edit_grade()
{
	printf("Write your code here to edit grade.");
}


void delete_grade()
{
	printf("Write your code here to delete grade.");
}
