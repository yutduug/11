
#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int a = 3;
    int b = 5;

    printf("교환 전: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("교환 후: a = %d, b = %d\n", a, b);

    return 0;
}
