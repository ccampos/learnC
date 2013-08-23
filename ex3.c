#include <stdio.h>

int main()
{
    int age = 10;
    int height = 75;
    char name[] = "Charly";
    float chest = 40.5;

    printf("I am %d years old. \n", age);
    printf("I am %d inches tall. \n", height);
    printf("His name is %s. \n", name);
    printf("His chest size is %.3subf. \n", chest);

    return 0;
}