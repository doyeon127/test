#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int year;

	printf("년도를 입력하세요. : "); //년도 값 입력받기
	scanf_s("%d", &year);

	if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0) // 윤년 조건 설정. 
		printf("%d년은 윤년\n", year);

	else //위의 조건에 해당되지 않으면 평년.
		printf("%d년은 평년\n", year);

	return 0;
}