#include <stdio.h>

int main() 
{
    unsigned char num1 = 200;

    unsigned short num2 = 60000;

    unsigned int num3 = 4123456789;

    unsigned long num4 = 4123456789;

    unsigned long long num5 = 1234567890123456790;

    printf("%u %u %u %lu %lu\n",num1,num2,num3,num4,num5);
    // unsigned char,unsigned short, unsigned int > %u
    // unsigned long > %lu, unsigned long long > %llu 로 프린트문에서 사용함

    // 부호란 음수표현 여부와 표현가능한 양수의 범위이다.
    // signed > 음수표현이 가능하다
    // unsigend > 음수표현이 불가능하지만 signed에 비해 표현 가능한 범위가 크다

    return 0;
}