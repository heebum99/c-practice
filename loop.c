#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//++연산자 => a++ => a = a+1;
	//++a 와 a++의 차이점 => 전자는 선 연산 후 문장 실행, 후자는 문장 먼저 실행 후 연산
	int a = 10;
	printf("a 는 %d\n", a);
	a++;
	printf("a 는 %d\n", a);
	a++;
	printf("a 는 %d\n", a);
	printf("---------------------\n");

	int b = 20;
	printf("b 는 %d\n", ++b);
	printf("b 는 %d\n", b++);
	printf("b 는 %d\n", b);
	printf("---------------------\n");

	int i = 1;
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("---------------------\n");


	//반복문 
	//for, while, do while

	//for(선언; 조건; 증감) {}
	for (int j = 1; j <= 10; j++) {
		printf("Hello World %d\n", j);
	}
	printf("---------------------\n");

	//while (조건) {}
	int k = 1;
	while (k <= 10) {
		printf("Hello World %d\n", k++);
	}
	printf("---------------------\n");

	//do {} while (조건);
	int c = 1;
	do {
		printf("Hello World %d\n", c++);
	} while (c <= 10);
	printf("---------------------\n");

	//2중 반복문
	for (int d = 1; d <= 3; d++) {
		printf("첫 번째 반복문 : %d\n", d);

		for (int e = 1; e<= 5; e++) {
			printf("     두 번째 반복문 : %d\n", e);
		}
	}
	printf("---------------------\n");


	//구구단
	for (int num1 = 2; num1 <= 9; num1++) {
		printf("%d단 계산\n", num1);
		for (int num2 = 1; num2 <= 9; num2++) {
			printf("  %d x %d = %d\n",num1,num2,num1*num2 );
		}
	}
	printf("---------------------\n");

	/*
	별 출력
	*
	**
	***
	****
	*****
	*/

	for (i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("---------------------\n");

	/*
	거꾸로 별 출력
	    *
	   **
	  ***
	 ****
	*****
	*/

	for (int i = 0; i < 5; i++) {
		for (int j = 5 - (i + 1); j > 0; j--) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	printf("---------------------\n");

	//피라미드를 쌓아라 - 프로젝트

	/*
	    *
	   ***
	  *****
	 *******
	*********
	*/

	int floor;
	printf("몇 층으로 쌓겠느냐? ");
	scanf("%d", &floor);
	for (int i = 0; i < floor; i++) {
		for (int j = i; j < (floor-1); j++) {
			printf(" ");
		}

		for (int k = 0; k <(2*i+1) ; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
