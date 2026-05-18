#include <stdio.h>
#include <float.h>

int main()
{
    float num1 = FLT_MIN;
    float num2 = FLT_MAX;

    double num3 = DBL_MIN;
    double num4 = DBL_MAX;

    long double num5 = LDBL_MIN;
    long double num6 = LDBL_MAX;

    printf("%.40f, %.2f\n",num1,num2); // %.다음에 들어가는 숫자는 소수점 몇번째 자리까지 표기 할지
                                      // float니 f
    
    printf("%e %e\n",num3,num4); // 지수표기법으로 %e 사용
    printf("%le %le\n",num5,num6); // long이니 %le사용
    

    return 0;
}