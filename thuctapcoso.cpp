#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>


struct airline
{
	char name[15];
	char email_address[30];
	char password[15];
    char phone_number[15];
	char address[15];
	char age[3];
	int seat_num;
	struct airline *following;
}
*begin, *stream;
struct airline *dummy;


void main()
{
	void exit(int x), loginAdmin(), registerAdmin(), loginPassenger(), registerPassenger(), user();
	int choice;
	begin = stream = NULL;
	int num = 1; 
	do
	{

		printf("888       888          888                                                888                   888888b.          d8888 888     888              d8888 d8b         888 d8b                           \n");
		printf("888   o   888          888                                                888                   888  '88b        d88888 888     888             d88888 Y8P         888 Y8P                           \n");
		printf("888  d8b  888          888                                                888                   888  .88P       d88P888 888     888            d88P888             888                               \n");
		printf("888 d888b 888  .d88b.  888  .d8888b  .d88b.  88888b.d88b.   .d88b.        888888  .d88b.        8888888K.      d88P 888 Y88b   d88P           d88P 888 888 888d888 888 888 88888b.   .d88b.  .d8888b \n");
		printf("888d88888b888 d8P  Y8b 888 d88P'    d88''88b 888 '888 '88b d8P  Y8b       888    d88''88b       888  'Y88b    d88P  888  Y88b d88P           d88P  888 888 888P'   888 888 888 '88b d8P  Y8b 88K     \n");
		printf("88888P Y88888 88888888 888 888      888  888 888  888  888 88888888       888    888  888       888    888   d88P   888   Y88o88P           d88P   888 888 888     888 888 888  888 88888888 'Y8888b.\n");
		printf("8888P   Y8888 Y8b.     888 Y88b.    Y88..88P 888  888  888 Y8b.           Y88b.  Y88..88P       888   d88P  d8888888888    Y888P           d8888888888 888 888     888 888 888  888 Y8b.          X88\n");
		printf("888P     Y888  'Y8888  888  'Y8888P  'Y88P'  888  888  888  'Y8888         'Y888  'Y88P'        8888888P'  d88P     888     Y8P           d88P     888 888 888     888 888 888  888  'Y8888   88888P'\n");
		printf("\n\n\n\t\t\t\t\t+++++++++++++ Welcome to BAV AirLines +++++++++++++\n\nTo Further Proceed, Please enter a value.");
        printf("\n***** Default Username && Password is root-root ***** Using Default Credentials will restrict you to just view the list of Passengers....\n");
		printf("\n\n\n\t\t Please enter your choice from below (0-5):");
		printf("\n\n\t\t(a) Press 0 to Exit.");
		printf("\n\n\t\t(b) Press 1 to Login as admin.");
		printf("\n\n\t\t(c) Press 2 to Register as admin.");
		printf("\n\n\t\t(d) Press 3 to Login as Passenger.");
		printf("\n\n\t\t(e) Press 4 to Register as Passenger.");
		printf("\n\n\t\t(f) Press 5 to Display the User Manual.");
		printf("\n\n\t\t Enter the desired option : ");



		scanf("%d", &choice); fflush(stdin);
		system("cls");
		switch (choice)
		{
		case 0:
			exit(num);
			num++;
			break;
		case 1:
			loginAdmin();
			break;
		case 2:
			registerAdmin();
			break;
		case 3:
		{
			loginPassenger();
			break;
		}
		case 4:
		{
			registerPassenger();
			break;
		}
		case 5:
		{
			user();
			break;
		}
		default:
			printf("\n\n\t SORRY INVALID OPTION!");
			printf("\n\n\t PLEASE CHOOSE FROM 0-5");
			printf("\n\n\t Do not forget to chose from 0-5");
		}
		getch();
	} while (choice != 5);
}

//void exit(int x)
//{
//}
void loginAdmin()
{
	FILE *fpointer = fopen("air_records", "w");
	if (!fpointer)
	{
		printf("\n Error in opening file!");
		return;
		Sleep(800);
	}
	stream = begin;
	while (stream)
	{
		fprintf(fpointer, "%-6s", stream->name);
		fprintf(fpointer, "%-15s", stream->email_address);
		fprintf(fpointer, "%-15s", stream->password);
        fprintf(fpointer, "%-15s", stream->phone_number);
		fprintf(fpointer, "%-15s", stream->address);
        fprintf(fpointer, "%-15s", stream->age);
        fprintf(fpointer, "\n");
		stream = stream->following;
	}
	printf("\n\n\t Details have been saved to a file");
	fclose(fpointer);
}
void registerAdmin()
{
}
void loginPassenger()
{
}

void registerPassenger()
{
	printf("\n\t Enter your name : ");
	gets(stream->name); fflush(stdin);
	printf("\n\t Enter your email address : ");
	gets(stream->email_address); fflush(stdin);
	printf("\n\t Enter your password : ");
	gets(stream->password); fflush(stdin);
    printf("\n\t Enter your phone number : ");
    gets(stream->phone_number); fflush(stdin);
    printf("\n\t Enter your address : ");
    gets(stream->address); fflush(stdin);
    printf("\n\t Enter your age : ");
    gets(stream->age); fflush(stdin);  
}
 void user()
 {
 }
//
//void display()
//{
//	stream = begin;
//	while (stream)
//	{
//		printf("\n\n Passport Number : %-6s", stream->passport);
//		printf("\n         name : %-15s", stream->name);
//		printf("\n      email address: %-15s", stream->email);
//		printf("\n      Seat number: A-%d", stream->seat_num);
//        printf("\n     Destination:%-15s", stream->destination);
//		printf("\n\n++*=====================================================*++");
//		stream = stream->following;
//	}
//
//}
//
//
//void cancel()
//{
//	stream = begin;
//	system("cls");
//	char passport  [6];
//	printf("\n\n Enter passort number to delete record?:");
//	gets(passport); fflush(stdin);
//	if (strcmp(begin->passport, passport) == 0)
//	{
//		dummy = begin;
//		begin = begin->following;
//		free(dummy);
//		printf(" booking has been deleted");
//		Sleep(800);
//		return;
//
//	}
//
//	while (stream->following)
//	{
//		if (strcmp(stream->following->passport, passport) == 0)
//		{
//			dummy = stream->following;
//			stream->following = stream->following->following;
//			free(dummy);
//			printf("has been deleted ");
//			getch();
//			Sleep(800);
//			return;
//		}
//		stream = stream->following;
//	}
//	printf("passport number is wrong please check your passport");
//
//}
