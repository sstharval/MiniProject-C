#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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


// ************************************GOOD LUCK IndiGo************************************
void details();

void reserve(int x)
{
	stream = begin;
	if (begin == NULL)
	{
		// first user
		begin = stream = (struct IndiGo_airline*)malloc(sizeof(struct IndiGo_airline));
		details();
		stream->following = NULL;
		printf("\n\t Seat booking successful!");
		printf("\n\t your seat number is: Seat A-%d", x);
		stream->seat_num = x;
		return;
		free(begin);
		free(stream);
	}
	else if (x > 100) // FULL SEATS
	{
		printf("\n\t\t Seat Full.");
		return;
	}
	else
	{
		// next user
		while (stream->following)
			stream = stream->following;
		stream->following = (struct IndiGo_airline *)malloc(sizeof(struct IndiGo_airline));
		stream = stream->following;
		details();
		stream->following = NULL;
		printf("\n\t Seat booking succesful!");
		printf("\n\t your seat number is: Seat A-%d", x);
		stream->seat_num = x;
		return;
		free(stream);
		
	}
} 
// ************************GOOD LUCK IndiGo********************************


void savefile()
{
	FILE *fpointer = fopen("IndiGo records", "w");
	if (!fpointer)
	{
		printf("\n Error in opening file!");
		return;
		Sleep(800);
	}
	stream = begin;
	while (stream)
	{
		fprintf(fpointer, "%-6s", stream->passport);

		fprintf(fpointer, "%-15s", stream->name);

		fprintf(fpointer, "%-15s", stream->email);

        fprintf(fpointer, "%-15s", stream->destination);

        fprintf(fpointer, "\n");
		stream = stream->following;
	}
	printf("\n\n\t Details have been saved to a file (IndiGo records)");
	fclose(fpointer);
}
//********************************GOOD LUCK IndiGo***************************************

void cancel()
{
	stream = begin;
	system("cls");
	char passport[6];
	printf("\n\n Enter passort number to delete record?:");
	gets(passport); fflush(stdin);
	if (strcmp(begin->passport, passport) == 0)
	{
		dummy = begin;
		begin = begin->following;
		free(dummy);
		printf(" booking has been deleted");
		Sleep(800);
		return;

	}

	while (stream->following)
	{
		if (strcmp(stream->following->passport, passport) == 0)
		{
			dummy = stream->following;
			stream->following = stream->following->following;
			free(dummy);
			printf("has been deleted ");
			getch();
			Sleep(800);
			return;
		}
		stream = stream->following;
	}
	printf("passport number is wrong please check your passport");
	

}
