#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, r;
	int P, C;

	printf("n의 값 : "); //n의 값 입력 
	scanf_s("%d", &n);

	printf("r의 값 : "); //r의 값 입력 
	scanf_s("%d", &r);

	//순열 
	P = n;
	for (int i = 1; i < r; i++) {
		P = P * (n - i);
	}
	printf("순열의 값 : %d\n", P);

	//중복 순열
	P = n;
	for (int i = 1; i < r; i++) {
		P = P * n;
	}
	printf("중복 순열의 값 : %d\n", P);

	//조합
	P = n;
	C = r;
	for (int i = 1; i < r; i++) {
		P = P * (n - i);
	}
	for (int i = 1; i < r; i++) {
		C = C * (r - i);
	}
	printf("조합의 값 : %d\n", P / C);


	//중복 조합
	P = n + r - 1;
	C = r;
	for (int i = 1; i < r; i++) {
		P = P * ((n + r - 1) - i);
	}
	for (int i = 1; i < r; i++) {
		C = C * (r - i);
	}
	printf("중복 조합의 값 : %d\n", P / C);

	return 0;
}