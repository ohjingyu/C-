#include <stdio.h>

int main ()
{
    char num1 = 128;

    unsigned char num2 = 256;

    printf("%d %u \n",num1,num2);
    // unsigned의 경우 최대값을 넘어서는 오버플로우시 항시 0 이됨
    // 오버플로우란 자료형에서 저장할 수 있는 최대값을 넘어가면 최소값부터 다시 시작하는 것을 말함
    // 언더플로우란 자료형에서 저장할 수 있는 최소값보다 최대값으로 다시 시작하는 것을 말함


    return 0;
}