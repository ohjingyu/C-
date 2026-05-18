#include <stdio.h>

int main ()
{
    int num1 = 0;
    int size;

    size = sizeof num1; // 변수 num1의 자료형 크기를 구함
    size = 

    printf("num1의 크기는 : %d\n", size);

    printf("char : %d, short : %d, int : %d, long: %d, long long : %d\n",
            sizeof(char), //1 sizeof로 char의 자료형 크기를 구함
            sizeof(short), // 2 sizeof로 short의 자료형 크기를 구함
            sizeof(int), // 4 sizeof로 int의 자료형 크기를 구함
            sizeof(long), // 8 sizeof로 long의 자료형 크기를 구함
            sizeof(long long) // 8 sizeof로 long long의 자료형 크기를 구함
    );

    return 0;
}