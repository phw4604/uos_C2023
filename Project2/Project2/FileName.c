#include <stdio.h>

int main(void) {


	char name[15]; //이름 변수 생성
	int num1, num2; //생년월일, 학번 변수 생성
	char major[33]; //학과 변수 생성
	printf("이름 : ");  
	scanf_s("%s", name, sizeof(name)); //이름 입력
	printf("생년월일 : ");
	scanf_s("%d", &num1); //생년월일 입력
	printf("학번 : ");
	scanf_s("%d", &num2); //학번 입력
	printf("학과 : ");
	scanf_s("%s", major, sizeof(major)); //학과 입력

	printf("\n이름 : %s", name); //이름 출력
	printf("\n생년월일 : %d", num1); //생년월일 출력
	printf("\n학번 : %d", num2); //학번 출력
	printf("\n학과 : %s", major); //학과 출력


}