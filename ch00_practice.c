//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	//퀴즈쇼 프로그램 만들기
//	printf("---- 넌센스 퀴즈쇼 ----");
//	char answer[20];
//	char rightAnswer[20];
//	int check;
//	//1번 문제
//	puts("\n\n");
//	printf("타이타닉의 구명 보트에는 몇 명이 탈수 있을까?\n");
//	printf("정답 >>> ");
//	scanf_s("%s", answer, sizeof(answer)); // 여기 문제가 있었네
//	puts("\n");
//	strcpy(rightAnswer, "9명"); // 정답 적는 칸
//	check = strcmp(answer, rightAnswer);
//	if (check == 0)
//		puts("정답!");
//	else
//		puts("땡! 정답은: 9명(구명 보트)");
//	//2번 문제
//	puts("\n");
//	puts("---- 다음 문제 ----");
//	puts("");
//	printf("금은 금인데 도둑고양이에게 가장 어울리는 금은?\n"); //문제 적는 칸
//	printf("정답 >>> ");
//	scanf_s("%s", answer, sizeof(answer));
//	puts("\n");
//	strcpy(rightAnswer, "야금야금"); // 정답 적는 칸
//	check = strcmp(answer, rightAnswer);
//	if (check == 0)
//		puts("정답!");
//	else
//		printf("땡! 정답은: %s\n", rightAnswer);
//	//3번 문제
//	puts("\n");
//	puts("---- 다음 문제 ----");
//	puts("");
//	printf("별 중에 가장 슬픈 별은?\n"); //문제 적는 칸
//	printf("정답 >>> ");
//	scanf_s("%s", answer, sizeof(answer));
//	puts("\n");
//	strcpy(rightAnswer, "이별"); // 정답 적는 칸
//	check = strcmp(answer, rightAnswer);
//	if (check == 0)
//		puts("정답!");
//	else
//		printf("땡! 정답은: %s\n", rightAnswer);
//	//4번 문제
//	puts("\n");
//	puts("---- 다음 문제 ----");
//	puts("");
//	printf("목수도 고칠 수 없는 집은?\n"); //문제 적는 칸
//	printf("정답 >>> ");
//	scanf_s("%s", answer, sizeof(answer));
//	puts("\n");
//	strcpy(rightAnswer, "고집"); // 정답 적는 칸
//	check = strcmp(answer, rightAnswer);
//	if (check == 0)
//		puts("정답!");
//	else
//		printf("땡! 정답은: %s\n", rightAnswer);
//	//5번 문제
//	puts("\n");
//	puts("---- 다음 문제 ----");
//	puts("");
//	printf("왕이 넘어지면 뭐가될까?\n"); //문제 적는 칸
//	printf("정답 >>> ");
//	scanf_s("%s", answer, sizeof(answer));
//	puts("\n");
//	strcpy(rightAnswer, "킹콩"); // 정답 적는 칸
//	check = strcmp(answer, rightAnswer);
//	if (check == 0)
//		puts("정답!");
//	else
//		printf("땡! 정답은: %s\n", rightAnswer);
//}