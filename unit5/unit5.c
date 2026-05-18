// 변수는 자료형 변수이름; 형식으로 선언
// 변수를 만드는 과정을 변수를 선언한다 라고 함
// int는 자료형(정수를 뜻하는 integer의 약어)
// C언어는 저장할 변수에 따라 달라짐
// char,short,int,long 정수 (저장할 수 있는 크기가 다름)
//float,double 실수
// void 형태가 없는 자료형 (포인터를 사용할때 함수의 반환값을 표현할 때 사용)
// 변수는 항시 문자부터 시작해야 함 (숫자로만 되어있거나, 숫자부터 시작하는 변수는 사용이 불가능) (밑줄로는 변수를 시작할 수 있음)
// printf 에 변수 사용시에는 %d를 사용한뒤 "%d", 변수명 과 같이 코드를 만든다



#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;
    // 변수를 각각 선언한 경우

    int num4, num5, num6;
    num4 = 1;
    num5 = 2;
    num6 = 3;
    // 변수명 지정 후 변수명 마다 지정될 값을 선언하는 방식

    int num7 = 6, num8 = 11;
    // 변수를 선언하면서, 초기화 하는 방식

    printf("%d %d %d \n",num1,num2,num3);
    printf("%d %d %d \n",num4,num5,num6);
    printf("%d %d \n", num7,num8);


    int one = 1, two = 2,  thr = 3;
    printf("%d %d %d \n",one,two,thr);

    return 0;
}
