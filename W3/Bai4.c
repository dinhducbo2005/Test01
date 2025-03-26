#include <stdio.h>

int main()
{
    int *ptr, *prt1;
    int x = 12345, y;

    ptr = &x, prt1 = &y;
    printf( "The value of ptr is %p\n", ptr );
    printf( "The address of x is %p\n\n", &x );
    printf("Kich thuoc cua con tro (ptr) la: %zu byte\n", sizeof(ptr));

    printf("Total characters printed on this line is:%n",&y);
    printf( " %d\n\n", y );

    y = printf( "This line has 28 characters\n" );
    printf( "%d characters were printed\n\n", y );

    printf( "Printing a %% in a format control string\n\n" );

    printf( "The address of y is %p\n\n", &y );
    return 0;
}
//máy tính cố gắng cấp phát địa chỉ gần nhau,
//y nằm trên hoặc dưới x, nếu x là 4567 thì y là 891011,
//địa chỉ 1 biến là địa chỉ byte đầu tiên trong biến, nên x và y cách nhau 4 giá trị
