#include "unity.h"
#define PROJECT_NAME "MusicQuizGame"
extern void test_file();
void setUp(void)
{}
void tearDown(void)
{}
int main(void)
{
    UnityBegin(NULL);
    RUN_TEST(test_file);
    return(UnityEnd());
}