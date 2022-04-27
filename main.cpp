#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 1000

struct SinhVien{ // tao kieu cau truc SinhVien
	int stt;
	char ten[50];
	char tenlop[7];
	char maso[9];
	char gioitinh[4];
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
void editgrade(SV &sv);
void editgradecheck(SV a[], int id, int n);
void delete_grade();
void finalresult(SV &sv);
void addgradeid(SV a[], int id, int n);
void show(SV a[], int i);
void addgrade(SV &sv, int id);


int main()
{
	int id=0;
	int n=1;
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
				sosv++;
				break;
			case '2':
				printf("\n2. Edit and related information.");
				printf("\nInput student ID: ");
				scanf("%d",&id);
				editgradecheck(arraySV, id, sosv);
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

void endline(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
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
    printf("\nHo va ten: "); fflush(stdin); fgets(sv.ten, sizeof(sv.ten), stdin); endline(sv.ten);
    printf("\nNhap gioi tinh: "); fflush(stdin); fgets(sv.gioitinh, sizeof(sv.gioitinh), stdin); endline(sv.gioitinh);
    printf("\nNhap ten lop: "); fflush(stdin); fgets(sv.tenlop, sizeof(sv.tenlop), stdin); endline(sv.tenlop);
    printf("\nNhap ma so sinh vien: "); fflush(stdin); fgets(sv.maso, sizeof(sv.maso), stdin); endline(sv.maso);
    printf("\nNhap diem Workshop: "); scanf("%f",&sv.workshop);
    printf("\nNhap diem Progress Test: "); scanf("%f",&sv.pttest);
    printf("\nNhap diem Assignment: "); scanf("%f",&sv.assignment);
    printf("\nNhap diem Practical Exam: "); scanf("%f",&sv.petest);
    printf("\nNhap diem Final Exam: "); scanf("%f",&sv.fetest);
    sv.stt = id;
    finalresult(sv);
    status(sv);
    printf("%s", sv.ten);
    printf("\n%s", sv.gioitinh);
    printf("\n%s", sv.tenlop);
    printf("\n%s", sv.maso);
    printf("\n%.2f", sv.workshop);
    printf("\n%.2f", sv.pttest);
    printf("\n%.2f", sv.assignment);
    printf("\n%.2f", sv.petest);
    printf("\n%.2f", sv.fetest);

}

void editgrade(SV &sv)
{
    printf("\nHo va ten: "); fflush(stdin); gets(sv.ten);
    printf("\nNhap gioi tinh: "); gets(sv.gioitinh);
    printf("\nNhap ten lop: "); gets(sv.tenlop);
    printf("\nNhap ma so sinh vien: "); gets(sv.maso);
    printf("\nNhap diem Workshop: "); scanf("%f",&sv.workshop);
    printf("\nNhap diem Progress Test: "); scanf("%f",&sv.pttest);
    printf("\nNhap diem Assignment: "); scanf("%f",&sv.petest);
    printf("\nNhap diem Practical Exam: "); scanf("%f",&sv.petest);
    printf("\nNhap diem Final Exam: "); scanf("%f",&sv.fetest);
    sv.stt = sv.stt;
    finalresult(sv);
    status(sv);
}

void editgradecheck(SV a[], int stt, int n){
	int found = 0;
	for(int i=0; i<n; i++){
		if(a[i].stt == stt){
			found = 1;
			system("cls");
			printf("\nUpdate student no. = ", stt);
			editgrade(a[i]);
			system("cls");
			break;
		}
	}
	if (found==0){
		printf("\nStudent no. %d doesn't exist.",stt);
	}
}

void edit_grade()
{
	printf("Write your code here to edit grade.");
}


void delete_grade()
{
	printf("Write your code here to delete grade.");
}
