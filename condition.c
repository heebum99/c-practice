#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//버스를 탄다고 가정, 학생/성인으로 구분
	int age = 25;
	
	//if(조건) {...} else{...}
	if (age >= 20) {
		printf("성인입니다.\n");
	}
	else {
		printf("학생입니다.\n");
	}
	printf("-----------------------\n");

	//초등학생(8~13) / 중학생(14~16) / 고등학생(17~19)으로 나누면?
	//if / else if / else
	age = 25;
	
	if (age >= 8 && age <= 13) {
		printf("초등학생입니다.\n");
	}
	else if (age >= 14 && age <= 16) {
		printf("중학생입니다.\n");
	}
	else if(age >= 17 && age <= 19) {
		printf("고등학생입니다.\n");
	}
	else {
		printf("성인입니다.\n");
	}
	printf("-----------------------\n");


	//break / continue
	//1~30번까지 있는 반에서 1~5번까지 조별발표를 한다.
	for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("나머지 학생은 집에 가세요.\n");
			break; //for문을 탈출.
		}
		printf("%d 번 학생은 조별 발표 준비를 하세요.\n", i);
	}
	printf("-----------------------\n");


	//1~30번까지 있는 반에서 7번 학생은 아파서 결석
	//7번을 제외하고 6~10번까지 조별 발표를 한다.
	for (int i = 1; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d번 학생은 결석입니다.\n",i);
				continue; //이후 문장을 실행하지 않고 다음 반복을 실행(i=8로 넘어감)
			}
			printf("%d 번 학생은 조별 발표 준비를 하세요.\n", i);
		}
	}
	printf("-----------------------\n");

	// && / ||
	int a = 10;
	int b = 11;
	int c = 13;
	int d = 13;
	if (a == b && c == d) {
		printf("a 와 b는 같고, c 와 d도 같습니다.\n");
	}
	else if (a == b || c == d) {
		printf("a 와 b, 혹은 c 와 d의 값이 같습니다.\n");
	}
	else {
		printf("값이 서로 다르네요.\n");
	}
	printf("-----------------------\n");



	return 0;
}
