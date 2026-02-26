#include "unity.h"
#include "calculator.h"

void setUp(void){}
void tearDown(void){}
void test_add_basic(void){
    TEST_ASSERT_EQUAL(5, add(2, 3));
}
void test_add_positive_negative(void){
    TEST_ASSERT_EQUAL(-2, add(2, -4));
}
void test_add_negative_negative(void){
    TEST_ASSERT_EQUAL(-7, add(-3, -4));
}
void test_add_zero(void){
    TEST_ASSERT_EQUAL(0, add(0, 0));
}
int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_add_basic);
    RUN_TEST(test_add_positive_negative);
    RUN_TEST(test_add_negative_negative);
    RUN_TEST(test_add_zero);
    return UNITY_END();
}