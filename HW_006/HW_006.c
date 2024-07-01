#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a;

	printf("값을 입력하세요: ");  // 행 개수 a입력받기
	scanf_s("%d", &a);

	for (int i = 0; i < a; i++) { // 피라미드 위치 지정을 위한 공백 
		for (int j = 0; j < a - i; j++) {
			printf(" "); 
		}
		if (0 < i && i < a - 1) {
			printf("*");
			for (int j = 0; j < i * 2 - 1; j++) { // 중간 공백 만들기.
				printf(" ");
			}
			printf("*");
		}
		if (i == 0 || i == a - 1) { // 첫 번째 행과 마지막 행 별 프린트
			for (int j = 0; j < i * 2 + 1; j++) {
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}