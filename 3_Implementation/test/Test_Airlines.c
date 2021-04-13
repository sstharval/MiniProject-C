#include "Airlines.h"
#include "unity.h"


/* Modify these two lines according to the project */

#define PROJECT_NAME    "ARS"

/* Prototypes for all the test functions */
void test_reserve(void);
void test_cancel(void);
void test_display(void);
void test_details(void);
void test_savefile(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

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

int x=101;
 
void test_reserve(void) 
{

  TEST_ASSERT_EQUAL_STRING("\n\t\t Seat Full.",stream->seat_num);

}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_reserve);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
