#include "calculator.h"
#include "unity.h"


#ifdef UNIT_TEST

Calculator calc;

void test_add(void) {
    TEST_ASSERT_EQUAL(32, calc.add(25, 7));
}

void test_sub(void) {
    TEST_ASSERT_EQUAL(20, calc.sub(23, 3));
}

void test_multiplication(void) {
    TEST_ASSERT_EQUAL(50, calc.mul(25, 2));
}

void test_division(void) {
    TEST_ASSERT_EQUAL(32, calc.div(96, 3));
}

void test_square(void){
    TEST_ASSERT_EQUAL(16, calc.square(4));
}

void process() {
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    RUN_TEST(test_multiplication);
    RUN_TEST(test_division);
    RUN_TEST(test_square);
    UNITY_END();
}

#ifdef ARDUINO

#include <Arduino.h>
void setup() {
    process();
}

void loop() {
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    delay(500);
}

#else

int main(int argc, char **argv) {
    process();
    return 0;
}

#endif

#endif
