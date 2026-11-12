
#include <stdio.h>

int main(void)
{
    int i;
    int grade[5];
    int *ptr = grade;
    int sum = 0;
    double average;

    // 성적 입력
    for (i = 0; i < 5; i++)
    {
        printf("grade[%d] = ", i);
        scanf("%d", &grade[i]);
    }

    // 포인터를 이용한 배열 접근 및 합계 계산
    printf("\n성적 출력:\n");

    for (i = 0; i < 5; i++)
    {
        printf("grade[%d] = %d\n", i, *(ptr + i));
        sum += *(ptr + i);
    }

    // 평균 계산
    average = sum / 5.0;

    printf("\n합계: %d\n", sum);
    printf("평균: %.2f\n", average);

    return 0;
}
