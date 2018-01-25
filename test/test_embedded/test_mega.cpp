#include <Arduino.h>
#include "calc.h"
#include "unity.h"

#ifndef UNIT_TEST

Calculator calc;

void loop(void);
void setup(void);

void test_add(void)
{
    TEST_ASSERT_EQUAL(15,calc.add(7,8));
}

void test_multiplication(void)
{
    TEST_ASSERT_EQUAL(6,calc.multiply(3,2));
}

void test_square(void)
{
    TEST_ASSERT_EQUAL(16,calc.square(4));
}

void test_division(void)
{
    TEST_ASSERT_EQUAL(8,calc.divide(16,2));
}

void test_subtraction(void)
{
    TEST_ASSERT_EQUAL(10,calc.subtract(100,90));
}

void setup(){
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_multiplication);
    RUN_TEST(test_square);
    RUN_TEST(test_division);
    RUN_TEST(test_subtraction);
    UNITY_END();
}
void loop()
    {
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    delay(500);
    }

#endif // !UNIT_TEST