//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <string.h>
//
//int main() {
//
//	//// double, char 변수를 하나씩 만들고, 각 변수의 주소를 정하는 포인터를 선언해서 초기화 합니다
//	//// 포인터를 사용해서 각 변수에 값을 입/출력하는 코드를 작성하세요
//	//double dataA;
//	//char dataB;
//	//double* pA = &dataA;
//	//char* pB = &dataB;
//	//printf("실수 입력: ");
//	//scanf_s("%lf", pA); //scanf는 주소값에 넣어야됨
//	//while (getchar() != '\n');
//	//printf("문자 입력: ");
//	//scanf_s("%c", pB, 1);
//	//printf("dataA : %.1f - dataB : %c\n", *pA, *pB);
//	////선생님꺼
//	//double da;
//	//double* pda = &da;
//	//printf("실수 입력 > "); scanf_s("%lf", pda);
//	//while (getchar() != '\n');
//	//printf("*pda : %.1f\n", *pda);
//	//puts("");
//
//	//char ca;
//	//char* pca = &ca;
//	//printf("문자 입력 > "); scanf_s("%c", pca, 1);
//	//printf("*pca : %c\n", *pca);
//
//
//
//
//	//// 정수 10개가 들어가는 배열을 선언하세요
//	//// 배열의 주소를 가지는 포인터를 만들고, 포인터를 사용해서 배열을 1 ~ 20사이의 랜덤값으로 초기화하고 출력하세요
//	//srand(time(NULL));
//	//int ar[10];
//	//int* par = ar;
//	//for (int i = 0; i < 10; i++) {
//	//	*(par + i) = rand() % 20 + 1; //pdata[i]이렇게 표현도 가능
//	//	printf("ar[%d] : %d\n", i, ar[i]);
//	//}
//	////선생님꺼
//	//int data[10];
//	//int* pdata = data;
//	//int dataLength = sizeof(data) / sizeof(int);
//
//	//srand((unsigned int)time(NULL));
//	//for (int i = 0; i < dataLength; i++) {
//	//	pdata[i] = rand() % 20 + 1;
//	//	printf("%3d", pdata[i]);
//	//}
//	//puts("");
//
//
//
//	//// 크기가 20인 문자열 배열을 선언하세요
//	//// - 배열의 주소를 가지는 포인터를 만들어서 문자열을 입력합니다
//	//// - 포인터를 사용해서 문자 하나씩 출력하는 코드를 작성하세요
//	//char ch[20];
//	//char* pch = ch;
//	//printf("문자열 입력: ");
//	//scanf_s("%s", pch, sizeof(ch));
//	//	
//	//for (int i = 0; i < strlen(ch); i++) {
//	//	printf("ch[%d]: %c\n", i, *(pch + i));
//	//}
//	////선생님꺼
//	//char text[20];
//	//char* ptext = text;
//	//printf("문장 입력 > "); scanf_s("%s", ptext, sizeof(text));
//	//puts("");
//
//	//for (int i = 0; i < strlen(ptext); i++) { //strlen은 받은 값의 주소로부터 null만나기 전까지 세는거니까 strlen(ptext)가능
//	//	putchar(ptext[i]);
//	//}
//	//puts("");
//
//	//while (*ptext != '\0') {
//	//	putchar(*ptext);
//	//	++ptext; //포인터 연산은 주소값이 바뀜
//	//}
//	//puts("");
//}