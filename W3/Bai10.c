#include <stdio.h>

int main() {
    int i=sizeof(int), l=sizeof(long), s=sizeof(short);
    int d=sizeof(double), c=sizeof(char), f=sizeof(float);
    printf("%d\n%d\n%d\n%d\n%d\n%d\n", i, l, s, d, c, f);
    return 0;
}
