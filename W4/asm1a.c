#include <stdio.h>

int main() {
    int d, m, y, x;
    char ch1, ch2;
    float f;

    scanf("%d", &x);
    scanf("%2d%2d%4d", &d, &m, &y);
    scanf("%d/%d/%d", &d, &m, &y);
    scanf(" %c%c", &ch1, &ch2);
    scanf("%f", &f);

    printf("%d\n", x);
    printf("%2d %2d %4d\n", d, m, y);
    printf("%d %d %d\n", d, m, y);
    printf("%c %c\n", ch1, ch2);
    printf("%.2f\n", f);

    return 0;
}
