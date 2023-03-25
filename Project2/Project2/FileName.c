#include <stdio.h>

int main(void) {


	char name[15];
	int num1, num2;
	char major[33];
	printf("이름 : ");
	scanf_s("%s", name, sizeof(name));
	printf("생년월일 : ");
	scanf_s("%d", &num1);
	printf("학번 : ");
	scanf_s("%d", &num2);
	printf("학과 : ");
	scanf_s("%s", major, sizeof(major));

	printf("\n이름 : %s", name);
	printf("\n생년월일 : %d", num1);
	printf("\n학번 : %d", num2);
	printf("\n학과 : %s", major);


}