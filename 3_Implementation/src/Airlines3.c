#include<stdio.h>
#include"../inc/Airlines.h"
struct IndiGo_airline
{
	char passport[6];
	char name[15];
    char destination[15];
	int seat_num;
	char email[25];
	struct IndiGo_airline *following;
}
*begin, *stream;



void display()
{
	stream = begin;
	while (stream)
	{
		printf("\n\n Passport Number : %-6s", stream->passport);
		printf("\n         name : %-15s", stream->name);
		printf("\n      email address: %-15s", stream->email);
		printf("\n      Seat number: A-%d", stream->seat_num);
        printf("\n     Destination:%-15s", stream->destination);
		printf("\n\n++*=====================================================*++");
		stream = stream->following;
	}

}
