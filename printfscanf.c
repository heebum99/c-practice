#include <stdio.h>

int main() {

	//정수형 변수에 대한 예제
	int age = 12;
	printf("%d\n", age); //%d는 정수형, age가 대입.
	age = 13;
	printf("%d\n", age);

	//실수형 변수에 대한 예제
	float f = 46.5f; //실수형 float 뒤에는 f를 붙여줘야함.
	printf("%f\n",f); //%f는 실수형 => float
	double d = 4.428;
	printf("%lf\n", d); //%lf는 실수형 => double

	//상수(변하지 않는 수)에 대한 예제 <=> 변수 
	const int YEAR = 2000; //const => 상수 선언
	printf("태어난 년도 : %d\n", YEAR);

	//printf
	//연산
	int add = 3 + 7;
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n",30,79,30+79);

	//scanf => 키보드 입력을 받아서 저장
	//scanf를 사용하려면 #define _CRT_SECURE_NO_WARNINGS 필요.
	int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input); //scanf에서 변수는 &로 주소값을 표현해줘야함.
	printf("입력값 : %d\n", input);

	int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three); //2개 이상의 값을 입력할때 space바로 구분
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);

	//문자(한 글자), 문자열(두 글자 이상의 여러 글자)
	char c = 'A';
	printf("%c\n", c); //%c는 문자

	char str[256]; //문자열을 사용하기 위해 문자 배열 생성
	printf("문자열을 입력하세요 : ");
	scanf_s(" %s", str, sizeof(str)); //%s는 문자열, 문자 배열에 입력받을때는 sizeof로 크기 지정 필요.
	printf("%s\n", str);
	return 0;
}