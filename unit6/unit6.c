// 중단점이란 브레이크 포인트 라고도 부르는 소드 코드의 특정 지점에서 프로그램의 실행을 멏무는데 사용한다. 단축키 F9 맥은 FN + F9
// F10 / FN + F10을 누르는 경우 중단점이 있는지 지점 부터 한줄씩 코드를 실행 한다.
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