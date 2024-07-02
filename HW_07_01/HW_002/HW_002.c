#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//변수 설정
	int n;
	int f3;
	int f1 = 0;
	int f2 = 1;

	//출력할 피보나치 수의 번호 입력받기
	printf("몇 번째 피보나치 수를 출력할 것인지 입력하시오. :");
	scanf_s("%d", &n);

	// 1번째 피보나치 수의 값 출력
	if (n == 1) {
		printf("%d번째 피보나치 수: %d", n, f1);
	}

	// 2번째 피보나치 수의 값 출력
	else if (n == 2) {
		printf("%d번째 피보나치 수: %d", n, f2);
	}
	else
	{
		for (int i = 2; i < n; i++) // 3번째 이후의 피보나치 수의 값 출력
		{
			f3 = f1 + f2;

			f1 = f2;
			f2 = f3;
		}
		printf("%d번째 피보나치 수: %d", n, f3);
	}
	return 0;
}