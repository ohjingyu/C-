#include <stdio.h>
#include <limits.h> // 자료형의 최대값 최소값을 위한 헤더파일

int main() 
{
    char num1 = CHAR_MIN;
    short num2 = SHRT_MIN;
    int num3 = INT_MIN;
    long num4 = LONG_MIN;
    long long num5 = LLONG_MIN;

    printf("%d %d %d %ld %lld\n",num1,num2,num3,num4,num5);

    return 0;
}