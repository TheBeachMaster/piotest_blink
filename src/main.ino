#ifndef UNIT_TEST
#include <Arduino.h>
#include "calc.h"

Calculator calc;

void blink_once(unsigned int delay_ms)
{
    digitalWrite(LED_BUILTIN,HIGH);
    delay(delay_ms);
    digitalWrite(LED_BUILTIN,LOW);
    delay(delay_ms);
}

void setup(void)
{
    Serial.begin(9600);
    while (!Serial)
    {
        ;;
    }

}

void loop()
{
    Serial.println("Adding things");
    Serial.println(calc.add(58,88));
    blink_once(200);
    Serial.println("Subtracting things");
    Serial.println(calc.subtract(66,41));
    blink_once(200);
    Serial.println("Squaring things");
    Serial.println(calc.square(5));
    blink_once(200);
    Serial.println("Dividing things");
    Serial.println(calc.divide(45,9));
    blink_once(200);
    Serial.println("Multiplying things");
    Serial.println(calc.multiply(40,8));
    blink_once(200);
}

#endif // !UNIT_TEST

