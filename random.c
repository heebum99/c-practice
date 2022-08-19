#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	//랜덤 함수 rand() => time.h, stdlib.h를 include 해줘야함.
	//rand()함수를 사용하려면 난수 초기화가 필수.
	printf("난수 초기화 이전..\n");

	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}
	printf("\n----------------------------\n");

	srand(time(NULL)); //난수 초기화.

	printf("난수 초기화 이후..\n");

	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}
	printf("\n----------------------------\n");


	//가위 바위 보 -if문
	srand(time(NULL));
	int num = rand() % 3; //0~2반환

	if (num == 0) {
		printf("가위\n");
	}
	else if (num == 1) {
		printf("바위\n");
	}
	else if(num == 2){
		printf("보\n");
	}
	else {
		printf("몰라요.\n");
	}
	printf("----------------------------\n");


	//가위 바위 보 - switch문
	//switch문에서 각 case마다 break 필요.
	int n = rand() % 3;
	switch (n) {
	case 0:printf("가위\n"); break;
	case 1:printf("바위\n"); break;
	case 2:printf("보\n"); break;
	default: printf("몰라요.\n"); break; 
	}

	//버스 초/중/고 - switch문
	//switch문을 if문처럼 이용하기
	int age = 8;
	switch (age) { //8~13세 초등, 14~16세 중등, 17~19세 고등.
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("초등학생입니다.\n"); break;
	case 14:
	case 15:
	case 16:printf("중학생입니다.\n"); break;
	case 17:
	case 18:
	case 19:printf("고등학생입니다.\n"); break;
	default:printf("학생이 아닌가봐요.\n"); break;
	}
	printf("----------------------------\n");


	//Up and Down - 프로젝트
	srand(time(NULL));
	num = rand() % 100 + 1; //1~100사이의 숫자

	printf("숫자 : %d\n", num);

	int answer = 0; //정답
	int chance = 5; //기회

	while (chance > 0) {
		printf("남은 기회 %d 번\n", chance--);
		printf("숫자를 맞혀보세요 (1~100) : ");
		scanf("%d", &answer);

		if (answer > num) {
			printf("DOWN ↓\n");
		}
		else if (answer < num) {
			printf("UP ↑\n");
		}
		else if (answer == num) { //정답일 경우 break을 통해 반복문 탈출
			printf("정답입니다!\n");
			break; 
		}
		else {
			printf("알 수 없는 오류가 발생했습니다.\n");
		}

		if (chance == 0) {
			printf("모든 기회를 다 사용하셨네요. 아쉽게 실패했습니다.");
		}
	}
	
	return 0;
}