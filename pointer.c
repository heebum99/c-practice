#include "khb.h"

void swap(int a, int b);
void swap_addr(int *a, int *b);
void changeArray(int* ptr);

int main() {
	//포인터
	
	//[철수] : 101호 -> 메모리 공간의 주소
	//[영희] : 201호
	//[민수] : 301호
	//각 문 앞에 '암호'가 걸려 있음
	
	int 철수 = 1; //암호
	int 영희 = 2;
	int 민수 = 3;

	printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수);
	//주소 = 철수라는 변수가 가지고 있는 메모리 공간의 주소를 의미
	//암호 = 철수라는 변수가 가지고 있는 값을 의미
	printf("영희네 주소 : %d, 암호 : %d\n", &영희, 영희);
	printf("민수네 주소 : %d, 암호 : %d\n", &민수, 민수);

	//미션맨!

	//첫 번째 미션 : 아파트의 각 집에 방문해 문에 적힌 암호 확인
	
	int* 미션맨; //포인터 변수
	미션맨 = &철수;
	printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);
	//포인터(미션맨) 변수가 가지고 있는 값은 주소 값
	//포인터(미션맨) 변수에 *을 붙이면 포인터 변수의 주소가 가지는 값

	미션맨 = &영희;
	printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	미션맨 = &민수;
	printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);


	//두 번째 미션 : 각 암호에 3을 곱해라
	미션맨 = &철수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	미션맨 = &영희;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	미션맨 = &민수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	//스파이
	//미션맨이 바꾼 암호에서 2를 빼라!
	int* 스파이 = 미션맨; //미션맨이 가리키는 주소를 스파이도 가리킨다.
	printf("\n ... 스파이가 미션 수행하는중 ...\n\n");
	스파이 = &철수;
	*스파이 = *스파이 - 2; //철수 = 철수 - 2
	printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

	스파이 = &영희;
	*스파이 = *스파이 - 2; //영희 = 영희 - 2
	printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

	스파이 = &민수;
	*스파이 = *스파이 - 2; //민수 = 민수 - 2
	printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

	printf("\n ... 철수 영희 민수는 집에 오고서는 바뀐 암호를 보고 깝놀 ...\n\n");
	printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수);
	printf("영희네 주소 : %d, 암호 : %d\n", &영희, 영희);
	printf("민수네 주소 : %d, 암호 : %d\n", &민수, 민수);
	//포인터 변수를 통해서 값을 바꿀 수 있다.

	//참고로 미션맨이 사는 곳의 주소는 &미션맨으로 확인
	printf("미션맨의 주소 : %d\n", &미션맨);
	printf("스파이의 주소 : %d\n", &스파이);
	printf("-----------------------------------------\n");

	//배열
	int arr[3] = { 5,10,15 }; //배열명 arr은 배열의 시작 주소를 가지고 있음.
	int* ptr = arr; //포인터 변수에 배열의 주소를 받음
	
	for (int i = 0; i < 3; i++) {
		printf("배열 arr[%d]의 값 : %d\n", i, arr[i]); //arr[i] == *(arr + i)
	}

	for (int i = 0; i < 3; i++) {
		printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);
	}

	printf("-----------------------------------------\n");

	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;

	for (int i = 0; i < 3; i++) {
		printf("배열 arr[%d]의 값 : %d\n", i, *(arr + i));
	}

	for (int i = 0; i < 3; i++) {
		printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);
	}
	printf("-----------------------------------------\n");

	//*(arr + i) == arr[i]와 같은 표현
	// arr == arr 배열의 첫번째 값의 주소와 동일 == &arr[0]
	printf("arr의 주소 : %d\n", arr);
	printf("arr[0]의 주소 : %d\n", &arr[0]);

	printf("arr 값이 가지는 주소의 실제 값 : %d\n", *arr); //*(arr + 0)
	printf("arr[0]의 실제 값 : %d\n", *&arr[0]);

	// *&는 아무것도 없는 것과 같다. &는 주소이며, *는 그 주소의 값이기 때문에 서로 상쇄된다.
	printf("arr[0]의 실제 값 : %d\n", *&*&*&*&*&*&arr[0]);
	printf("-----------------------------------------\n");

	//SWAP
	int a = 10;
	int b = 20;
	printf("a의 주소 : %d\n", &a);
	printf("b의 주소 : %d\n", &b);


	//a와 b의 값을 바꾼다.
	printf("Swap 함수 전 => a : %d, b : %d\n", a, b);
	swap(a, b); //값에 의한 복사(Call by Value) -> 값만 복사한다는 의미
	printf("Swap 함수 후 => a : %d, b : %d\n", a, b);
	
	//메모리 공간에 있는 주소값 자체를 넘기면?
	printf("(주소값 전달)Swap 함수 전 => a : %d, b : %d\n", a, b);
	swap_addr(&a, &b); 
	printf("(주소값 전달)Swap 함수 후 => a : %d, b : %d\n", a, b);
	printf("-----------------------------------------\n");


	//배열일 때 arr2 -> 주소
	int arr2[3] = { 10,20,30 };
	changeArray(arr2); // changeArray(&arr2[0]);
	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr2[i]);
	}
	return 0;
}

void swap(int a, int b) {
	printf("a의 주소 : %d\n", &a);
	printf("b의 주소 : %d\n", &b);
	int temp = a;
	a = b;
	b = temp;
	printf("Swap 함수 => a : %d, b : %d\n", a, b);
}

void swap_addr(int *a, int *b) { //넘겨준 주소를 받으려면 포인터로 받아야한다.
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(주소값 전달)Swap 함수 => a : %d, b : %d\n", *a, *b);
}

void changeArray(int* ptr) {
	ptr[2] = 50;
}