#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
#include"Airlines.h"


struct IndiGo_airline
{
	char passport[6];
	char name[15];
    char destination[15];
	int seat_num;
	char email[15];
	struct IndiGo_airline *following;
}
*begin, *stream;
struct IndiGo_airline *dummy;

void main()
{
	void reserve(int x), cancel(), display(), savefile();  //function prototypes
	int choice;
	begin = stream = NULL;  //initialize the struct pointers to NULL 
	int num = 1;
	do
	{
		
		printf("\n\n\t\t ********************************************************************");
		printf("\n\t\t                   Welcome to Isha Prabhu's airline system              ");
		printf("\n\t\t   *******************************************************************");
		printf("\n\n\n\t\t Please enter your choice from below (1-4):");
		printf("\n\n\t\t 1. Reservation");
		printf("\n\n\t\t 2. Cancel");
		printf("\n\n\t\t 3. DISPLAY RECORDS");
		printf("\n\n\t\t 4. EXIT");
		printf("\n\n\t\t feel free to contact ");
		printf("\n\n\t\t Enter your choice :");

        choice=0;

		scanf("%d", &choice); fflush(stdin);
		system("cls"); //to clear the screen after entering choice from user
		switch (choice)
		{
		case 1:
			reserve(num);
			num++;
			break;
		case 2:
			cancel();
			break;
		case 3:
			display();
			break;
		case 4:
		
			 savefile();
			 break;
		
		default:
			printf("\n\n\t SORRY INVALID CHOICE!");
			printf("\n\n\t PLEASE CHOOSE FROM 1-4");
			printf("\n\n\t Do not forget to chose from 1-4");
		}
		getch(); // will hold the above display untill a key is pressed
	} while (choice != 4);
}
