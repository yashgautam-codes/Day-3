#include <stdio.h>
int main()
{
    float c;    // c->Celcius
    printf("Enter the temperature in Celcius :- ");
    scanf("%f",&c);
    float f = (c*1.8)+32;  // f->Fahrenheit
    printf("Temperature in Fahrenheit :- %f",f);
    return 0;
}