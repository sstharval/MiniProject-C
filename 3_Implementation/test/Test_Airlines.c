#include "../inc/Airlines.h"
#include "../unity/unity.h"
#include<string.h>
#include "../unity/unity_internals.h"



/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}


	struct IndiGo_airline
{
	char passport[6];
	char name[15];
    char destination[15];
	int seat_num;
	char email[25];
	
}stream;





void test_details(void)
{
strcpy(stream.passport,"1234");
strcpy(stream.name,"isha");
strcpy(stream.email,"ishavinita@gmail.com");
strcpy(stream.destination,"Singapore");


TEST_ASSERT_EQUAL_STRING("1234",stream.passport);
TEST_ASSERT_EQUAL_STRING("isha",stream.name);
TEST_ASSERT_EQUAL_STRING("ishavinita@gmail.com",stream.email);
TEST_ASSERT_EQUAL_STRING("Singapore",stream.destination);



}

void test_display(void)
{
strcpy(stream.passport,"1234");
strcpy(stream.name,"isha");
strcpy(stream.email,"ishavinita@gmail.com");
strcpy(stream.destination,"Singapore");

TEST_ASSERT_EQUAL_STRING("1234",stream.passport);
TEST_ASSERT_EQUAL_STRING("isha",stream.name);
TEST_ASSERT_EQUAL_STRING("ishavinita@gmail.com",stream.email);
TEST_ASSERT_EQUAL_STRING("Singapore",stream.destination);



}





int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_details);
    RUN_TEST(test_display);
    
    

    /* Close the Unity Test Framework */
    return UNITY_END();
}




