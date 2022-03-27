#include "unity.h"
#include "main_operations.h"
#define PROJECT_NAME "MusicQuizGame"
void test_main();
void setUp()
{}
void tearDown()
{}
int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_main);
    return UNITY_END;
}