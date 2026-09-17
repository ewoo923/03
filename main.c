#include <stdio.h>

int main(void) {
    char c;
    int i;
    
    printf("input a character :");
    scanf("%c", &c);
    
    //c1 = c + 1;
    printf("The next character is %c (%d) is %c (%d)\n", c, c, c+1, c+1);
    return 0;
}