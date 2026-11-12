
#include <stdio.h>

int main(void)
{
    int i = 10;
    char c = 'a';

    // 정수형 포인터 변수 선언
    int *iptr;

    // iptr이 변수 i를 가리키도록 설정
    iptr = &i;

    // 문자형 포인터 변수 선언
    char *cptr;

    // cptr이 변수 c를 가리키도록 설정
    cptr = &c;

    // 정수형 포인터 변수 선언
    int *iptr2;

    // iptr2도 iptr과 같은 곳을 가리키도록 설정
    iptr2 = iptr;

    printf("i : %p\n%p (size:%zu)\n",
           (void *)iptr, (void *)&i, sizeof(iptr));

    printf("c : %p\n%p (size:%zu)\n",
           (void *)cptr, (void *)&c, sizeof(cptr));

    printf("iptr2 : %p, %i\n",
           (void *)iptr2, *iptr2);

    return 0;
}
