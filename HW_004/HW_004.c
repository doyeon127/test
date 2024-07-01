#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float num1, num2;
	char ch;

	//예시 화면 형식 맞춰서 출력
	printf("Input Arithmetic Operation\n");
	printf("ex)    3.4 * 8.5\n");
	printf("       2.9 - 5.4\n");
	printf("       3.9 * 8.0\n");
	printf("       3.9 * 8\n\n");

	printf("input:");
	scanf("%f %c %f", &num1, &ch, &num2);// 실수 2개에 연산자 1개를 입력받기

	int mul = 1; // 거듭제곱근 계산, for문 사용
	if (ch == '^') {
		for (int i = 0; i < num2; i++) {
			mul = mul * num1;
		}printf("%.2f ^ %.2f = %.2f\n", num1, num2, mul);

	}

	else {
		switch (ch) { //입력받은 연산자의 경우를 거듭제곱근 제외 케이스를 나눠 설정
		case '+':
			printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
			break;

		case '-':
			printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
			break;

		case '*':
			printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
			break;

		case '/':
			if (num2 != 0) {
				printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
			}
			else // 나누기에서 예외값 0 설정.
				printf("0이 아닌 숫자로 입력해 주세요 \n");
		}

	}
	return 0;
}