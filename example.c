
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    char *pc;
    int *pi;
    double *pd;

    pc = (char *)(uintptr_t)10000;
    pi = (int *)(uintptr_t)10000;
    pd = (double *)(uintptr_t)10000;

    printf("증가 전:\n");
    printf("pc = %llu\n", (unsigned long long)(uintptr_t)pc);
    printf("pi = %llu\n", (unsigned long long)(uintptr_t)pi);
    printf("pd = %llu\n", (unsigned long long)(uintptr_t)pd);

    pc++;
    pi++;
    pd++;

    printf("\n증가 후:\n");
    printf("pc = %llu\n", (unsigned long long)(uintptr_t)pc);
    printf("pi = %llu\n", (unsigned long long)(uintptr_t)pi);
    printf("pd = %llu\n", (unsigned long long)(uintptr_t)pd);

    return 0;
}
