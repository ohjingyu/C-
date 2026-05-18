#include <stdio.h>

int main()
{
    float num1 = 0.1f; // 단정밀도 부동소수점 변수를 선언하고 값을 할당
                       // float는 숫자 뒤에 F를 붙임

    double num2 = 3867.215820; // 배정밀도 부동소주점 변수를 선언하고 값을 할당
                               // double은 숫자 뒤에 아무것도 붙이지 않음
    
    long double num3 = 9.327513l; // 배정밀도 부동 소수점 변수를 선언하고 값을 할당
                                  // long double은 숫자 뒤에 l 을 붙임

    
    printf("%f %f %lf\n",num1,num2,num3);
    // float, double은 %f로 출력 하고 long double의 경우 %lf로 출력 함
    

    return 0;
}