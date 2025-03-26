#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float x;

    scanf("%d", &n);
    scanf("%f", &x);


    printf("123456789\n");
    printf("%-5d\n", n);
    printf("%5d\n", n);
    printf("%05d\n", n);
    printf("%5.1f\n", -x);
    printf("%+5.1f\n", x);
    printf("%o\n", n);
    printf("%#o\n", n );
    printf("%x\n", n);
    printf("%#x\n", n);

    return 0;
}

