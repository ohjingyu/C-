#include <stdio.h>
#include <limits.h>

int main() {

    char num1 = CHAR_MAX + 1;
    short num2 = SHRT_MAX + 1;
    int num3 = INT_MAX + 1;
    long long num4 = LLONG_MAX + 1;

    printf("%d %d %d %lld\n",num1,num2,num3,num4);

    char num11 = CHAR_MIN -1;
    short num22 = SHRT_MIN -1;
    int num33 = INT_MAX + 1 -1;
    long long num44 = LLONG_MIN -1;
    // 최소값보다 작아져 언더플로우가 발생 함 (int_max의 경우에는 최대값을 넘어 오버플로우 > 최소값 보다 작아져 언더플로우가 같이 발생함)

    printf("%d %d %d %lld\n",num11,num22,num33,num44);

    unsigned char num5 = UCHAR_MAX + 1; 
    unsigned short num6 = USHRT_MAX + 1;
    unsigned int num7 = UINT_MAX + 1;
    unsigned long long num8 = ULLONG_MAX + 1;
    // 최대값 보다 커졌으니 오버플로우로 최소값이 되어 출력됨

    printf("%u %u %u %llu\n",num5,num6,num7,num8);

    unsigned char num55 = UCHAR_MAX;
    unsigned short num66 = USHRT_MAX;
    unsigned int num77 = UINT_MAX;
    unsigned long long num88 = ULLONG_MAX;

    printf("%u %u %u %llu\n",num55,num66,num77,num88);

    return 0;
}