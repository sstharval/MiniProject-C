#include<stdio.h>
#include"../inc/Airlines.h"
struct IndiGo_airline
{
	char passport[6];
	char name[15];
    char destination[15];
	int seat_num;
	char email[25];
	
}
 *stream;




void details()
{
	printf("\n\t Enter your passport number:");
	fgets(stream->passport,6,stdin);    //reads a line from stdin and stores it into the string pointed
	printf("\n\t Enter your  name:");
	fgets(stream->name,15,stdin); 
	printf("\n\t Enter your email address:");
	fgets(stream->email,15,stdin); 
    printf("\n\t Enter the Destination : ");
    fgets(stream->destination,15,stdin);
}
