#include "unity.h"
#include "main_operations.h"
#define PROJECT_NAME "MusicQuizGame"
/* Prototype for all the test functions */
/**
 * @brief Testing function for MusicQuizGame
 * 
 */

/**
 * @brief Testing function for main project
 * 
 */
void test_main();
/* Required by the unity test framework */
void setUp()
{}
/* Required by the unity test framework */
void tearDown()
{}
/* Start of the application test */
int main()
{
    /* Initiate the unity test framework */
    UNITY_BEGIN();
    /* Run test functions */
    RUN_TEST(test_main);
    /* Close the unity test framework */
    return UNITY_END;
}