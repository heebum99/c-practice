#include "khb.h"

//비밀번호를 입력 받아서
//맞는 경우 => 비밀 일기를 읽어와서 보여주고, 계속 작성하도록 한다.
//틀린경우 => 경고 메시지를 표시하고 종료합니다.

#define MAX 10000

int main() {
	//fgets, fputs 활용
	char line[MAX]; //파일에서 불러온 내용을 저장할 변수
	char contents[MAX]; //일기장에 입력할 내용
	char password[20]; //비밀번호 입력
	char c; //비밀번호 입력 할 때 키값 확인용(마스킹)

	printf("'비밀일기'에 오신 것을 환영합니다\n");
	printf("비밀번호를 입력하세요 : ");

	//getchar() / getch()의 차이
	//getchar(): 엔터를 입력받아야 동작을 한다.
	//getch(): 키 입력 시 바로바로 동작을 한다.
	int i = 0;

	while (1) {
		c = getch();
		
		if (c == 13) { //Enter -> 비밀번호 입력 종료
			password[i] = '\0';
			break;
		}
		else { //비밀번호 입력 중
			printf("*");
			password[i] = c;
		}
		i++;
	}

	//비밀번호 : 나도코딩 skehzheld
	printf("\n\n === 비밀번호 확인 중...===\n\n");
	if (strcmp(password, "skehzheld") == 0) { //문자열 비교시 strcmp()함수 사용, 일치 시 = 1, 불일치 시 = 0
		printf(" === 비밀번호 확인 완료 ===\n\n");
		char* fileName = "c:\\자바\\secretdiary.txt";
		FILE* file = fopen(fileName, "a+b"); 
		//파일이 없으면 생성, 파일이 있으면 apend(이어쓰기)를 한다.
		if (file == NULL) {
			printf("파일 열기 실패\n");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL) {
			printf("%s", line);
		}

		printf("\n\n 내용을 계속 작성하세요! 종료하시려면 EXIT를 입력하세요\n\n");

		while (1) {
			scanf("%[^\n]", contents); //줄 바꿈이 나오기 전까지 모든 문자열을 읽어들임 (한 문장씩)
			getchar(); //Enter 입력 (\n) Flush 처리, 이 문장이 없으면 다음 scanf에서 \n 처리가 되버림.

			if (strcmp(contents, "EXIT") == 0) {
				printf("비밀일기 입력을 종료합니다\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file); //Enter를 위에서 무시 처리했으므로 임의로 추가
		}
		fclose(file);
	}

	else { //비밀번호 틀린 경우
		printf(" === 비밀번호가 틀렸어요 ===\n\n");
		printf(" 꺅!! 당신 누구야?!! 감히 내 일기장을 !!\n\n\n");
	}

	return 0;
}