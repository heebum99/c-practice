#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//++������ => a++ => a = a+1;
	//++a �� a++�� ������ => ���ڴ� �� ���� �� ���� ����, ���ڴ� ���� ���� ���� �� ����
	int a = 10;
	printf("a �� %d\n", a);
	a++;
	printf("a �� %d\n", a);
	a++;
	printf("a �� %d\n", a);
	printf("---------------------\n");

	int b = 20;
	printf("b �� %d\n", ++b);
	printf("b �� %d\n", b++);
	printf("b �� %d\n", b);
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


	//�ݺ��� 
	//for, while, do while

	//for(����; ����; ����) {}
	for (int j = 1; j <= 10; j++) {
		printf("Hello World %d\n", j);
	}
	printf("---------------------\n");

	//while (����) {}
	int k = 1;
	while (k <= 10) {
		printf("Hello World %d\n", k++);
	}
	printf("---------------------\n");

	//do {} while (����);
	int c = 1;
	do {
		printf("Hello World %d\n", c++);
	} while (c <= 10);
	printf("---------------------\n");

	//2�� �ݺ���
	for (int d = 1; d <= 3; d++) {
		printf("ù ��° �ݺ��� : %d\n", d);

		for (int e = 1; e<= 5; e++) {
			printf("     �� ��° �ݺ��� : %d\n", e);
		}
	}
	printf("---------------------\n");


	//������
	for (int num1 = 2; num1 <= 9; num1++) {
		printf("%d�� ���\n", num1);
		for (int num2 = 1; num2 <= 9; num2++) {
			printf("  %d x %d = %d\n",num1,num2,num1*num2 );
		}
	}
	printf("---------------------\n");

	/*
	�� ���
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
	�Ųٷ� �� ���
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

	//�Ƕ�̵带 �׾ƶ� - ������Ʈ

	/*
	    *
	   ***
	  *****
	 *******
	*********
	*/

	int floor;
	printf("�� ������ �װڴ���? ");
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
