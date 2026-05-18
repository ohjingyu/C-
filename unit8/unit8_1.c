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
    
    float num4 = 3.e5f; // 지수표기 법으로 300000을 표기

    double num5 = -1.3827e-2; // 지수표기 법으로 -0.013827을 표기

    long double num6 = 5.12e+9l; // 지수표기 법으로 5120000000을 표기
    
    printf("%f %f %lf\n",num4,num5,num6); // 실수로 표기시에는 %f
    printf("%e %e %le\n",num4,num5,num6); // 지수로 표기시에는 %e long인경우에는 %le
    

    return 0;
}