#include <stdio.h>

/* Warning: This program is wrong on purpose. */ 

int main()
{
    int age = 12;
    int height = 75;
    char name[] = "Charly";
    float chest = 40.5;

    printf("I am %d years old. \n", age);
    printf("I am %d inches tall. \n", height);
    printf("His name is %s. \n", name);
    printf("His chest size is %.3f. \n", chest);

    return 0;
}