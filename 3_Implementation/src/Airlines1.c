#include<stdio.h>
#include"../inc/Airlines.h"
struct IndiGo_airline
{
	char passport[6];
	char name[15];
    char destination[15];
	int seat_num;
	char email[15];
	
}
 *stream;




void details()
{
	printf("\n\t Enter your passport number:");
	gets(stream->passport); fflush(stdin);   //reads a line from stdin and stores it into the string pointed
	printf("\n\t Enter your  name:");
	gets(stream->name); fflush(stdin);
	printf("\n\t Enter your email address:");
	gets(stream->email); fflush(stdin);
    printf("\n\t Enter the Destination : ");
    gets(stream->destination); fflush(stdin);
}
