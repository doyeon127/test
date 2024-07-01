#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//함수 선언
	float num1, num2, num3, num4, num5;

	printf("1 번째 실수를 입력하시오."); // 실수 값 받기.
	scanf_s("%f", &num1);

	printf("\n2 번째 실수를 입력하시오.");
	scanf_s("%f", &num2);

	printf("\n3 번째 실수를 입력하시오.");
	scanf_s("%f", &num3);

	printf("\n4 번째 실수를 입력하시오.");
	scanf_s("%f", &num4);

	printf("\n5 번째 실수를 입력하시오.");
	scanf_s("%f", &num5);

	printf("---- 결과 ----\n");

	//평균값 구하기.
	float ave;
	float total;
	total = num1 + num2 + num3 + num4 + num5;
	ave = total / 5;

	printf("평균은 %f 입니다.\n", ave);

	//최대값 최솟값 구하기
	float max, min;

	max = num1;
	if (max < num2) max = num2;
	if (max < num3) max = num3;
	if (max < num4) max = num4;
	if (max < num5) max = num5;

	printf("최대값은 %f 입니다.\n", max);

	min = num1;
	if (max < num2) min = num2;
	if (max < num3) min = num3;
	if (max < num4) min = num4;
	if (max < num5) min = num5;

	printf("최솟값은 %f 입니다.\n", min);
	return 0;
}
