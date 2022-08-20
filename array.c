#include "khb.h"

int main() {

	//배열
	int subway_1 = 30; //지하철 1호차에는 30명이 타고 있다.
	int subway_2 = 40;
	int subway_3 = 50;

	printf("지하철 1호차에 %d 명이 타고 있습니다.\n", subway_1);
	printf("지하철 2호차에 %d 명이 타고 있습니다.\n", subway_2);
	printf("지하철 3호차에 %d 명이 타고 있습니다.\n", subway_3);
	printf("-------------------------------------\n");
	//여러개의 변수를 동시에 생성
	int subway_array[3]; //[0] [1] [2]
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++) {
		printf("지하철 %d호차에 %d 명이 타고 있습니다.\n", i+1,subway_array[i]);
	}
	printf("-------------------------------------\n");

	//값 설정 방법
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //값을 하나라도 초기화 하지 않으면 쓰레기 값이 설정, 하나라도 선언한다면 나머지는 0으로 설정.
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	printf("-------------------------------------\n");

	/*
	배열 크기는 항상 상수로 선언
	ex) int size = 10;
	int arr [size]; => 에러 발생.
	*/

	float arr_f[5] = { 1.0f,2.0f,3.0f }; //1.0, 2.0, 3.0, 0.0, 0.0으로 설정
	for (int i = 0; i < 5; i++) {
		printf("%f\n", arr_f[i]);
	}
	printf("-------------------------------------\n");

	//문자 vs  문자열
	char c = 'A';
	printf("%c\n", c);
	printf("-------------------------------------\n");


	//문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0'이 포함되어야 함.
	char str[7] = "coding"; // [c][o][d][i][n][g][\0]
	printf("%s\n", str);
	printf("%d\n", sizeof(str)); //sizeof()함수 => 배열의 크기를 출력
	printf("-------------------------------------\n");

	for (int i = 0; i < sizeof(str); i++) {
		printf("%c\n", str[i]);
	}
	printf("-------------------------------------\n");

	//영어 1글자 : 1byte
	//한글 1글자 : 2byte
	char kor[] = "나도코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor)); //2*4글자 + \0(널문자) => 9
	printf("-------------------------------------\n");

	char c_array[7] = { 'c','o','d','i','n','g','\0'}; // char c_array[7] = "coding" 과 같은 의미.
	printf("%s\n", c_array);
	printf("-------------------------------------\n");

	char ary[10] = { 'c','o','d','i','n','g' };
	printf("%d\n", sizeof(ary));
	for (int i = 0; i < sizeof(ary); i++) {
		printf("%c\n", ary[i]); //coding 출력 후 나머지는 NULL문자(빈 공간) 
	}
	printf("-------------------------------------\n");

	for (int i = 0; i < sizeof(ary); i++) {
		printf("%d\n", ary[i]); //ASCII코드 값이 출력, NULL문자는 0으로 출력
	}
	printf("-------------------------------------\n");

	//ASCII코드 : a = 97, A = 65, 0 = 48 ...
	printf("%c\n", 'a');
	printf("%d\n", 'a');
	printf("%c\n", 'b');
	printf("%d\n", 'b');
	printf("%c\n", 'A');
	printf("%d\n", 'A');
	printf("%c\n", '\0');
	printf("%d\n", '\0');
	printf("%c\n", '0');
	printf("%d\n", '0');
	printf("-------------------------------------\n");


	//0~127 사이의 아스키코드 정수값에 해당하는 문자 확인
	for (int i = 0; i < 128; i++) {
		printf("아스키 코드 정수 %d : %c\n", i, i);
	}


	return 0;
}