#include <stdio.h>

int main(void) {
    char c;
    int i;
    int input_int;
    float input_float;

    printf("input a number : ");
    scanf(" %c", &c);
    i = c - '0';

    printf("enter an integer : ");
    scanf("%d", &input_int);

    printf("enter a float : ");
    scanf("%f", &input_float);

    printf("The input number is %i\n", i);
    printf("integer : %d, float : %f\n", input_int, input_float);
    return 0;
}
