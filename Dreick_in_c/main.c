#include <stdio.h>

int circumference(int a,int b, int c) {
    return a+b+c;
}

int main(void) {
    int a = 2;
    int b = 2;
    int c = 1;

    printf("umfang ist %d",circumference(a,b,c));

    return 0;
}