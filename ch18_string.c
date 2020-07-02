//#include <stdio.h>
//#include <string.h> // 문자열 관련 함수
//
//int main() {
//	/*
//	문자열
//	*/
//	//char wordA[10] = "string";
//	//printf("wordA: %s\n", wordA);
//
//	//char wordB[] = "good";
//	//printf("wordB: %s\n", wordB);
//	//// 글자수는 4지만 크기는 널값을 더해야 하기 때문에 크기는 5임
//	//printf("wordB 크기: %d\n", sizeof(wordB));
//	//// %s를 하면 해당 문자열의 시작 주소를 읽기 시작해서 널값을 만나기 전까지 불러옴 그래서 생성할때 +1공간 필요
//	//char wordC[4] = "good";
//	//printf("wordC: %s\n", wordC);
//	////c언어는 문자열의 마지막에 NULL(\0) r값을 사용해서 문자열의 끝을 표시
//	//puts("");
//	//char wordD[] = "Good luck";
//	//printf("wordD: %s\n", wordD);
//	//printf("wordD 크기: %d\n", sizeof(wordD));
//	//wordD[2] = '\0'; // null 값임
//	//printf("wordD: %s\n", wordD); // null값을 만나면 출력을 멈춤
//	//printf("wordD 크기: %d\n", sizeof(wordD)); // 출력을 멈춘거지 데이터를 삭제한게 아님
//
//	//for (int i = 0; i < sizeof(wordD); i++) {
//	//	putchar(wordD[i]);
//	//} // 이러면 전체 출력 가능
//	//puts("");
//	//printf("시작 주소부터 Null\0 문자 전까지 출력");
//
//
//	/*
//	문자열 함수
//	strlen(문자열):
//		null문자 전까지의 문자의 수를 계산해서 반환함(byte단위)
//	*/
//
//	/*char text[100] = "Have a nice day";
//	printf("text: %s\n", text);
//	printf("text 크기 : %d\n", sizeof(text));
//	printf("text 문자수 : %d\n", strlen(text));
//	int textLength = strlen(text);
//	printf("text 문자수 : %d\n", textLength);
//	puts("");
//	for (int i = 0; i < strlen(text); i++) {
//		putchar(text[i]);
//	}
//	puts("");
//
//	int idx = 0;
//	while (text[idx] != '\0') {
//		putchar(text[idx]);
//		idx++;
//	}
//	puts("");*/
//
//	////strcpy(문자열1, 문자열2): 2의 값을 1로 복사
//	////strcpy_s(문자열1, 허용크기, 문자열2): 2의 값을 1로 복사할때 허용크기 내인지 확인
//	//char dataA[10];
//	//strcpy_s(dataA, sizeof(dataA), "복사");
//	//printf("dataA: %s\n", dataA);
//	//strcpy_s(dataA, sizeof(dataA), "gkgkgk"); // 이렇게 문자열 변경 가능
//	//printf("dataA: %s\n", dataA);
//	//puts("");
//	//char dataB[] = "2020 C"; // dataA보다 큰 길이값 넣으면 에러남
//	//strcpy_s(dataA, sizeof(dataA), dataB);
//	//printf("dataA: %s\n", dataA);
//
//	////strcat(문자열1, 문자열2): 문자열1 뒤에 문자열2 이어붙임
//	////strcat_s(문자열1, 허용크기, 문자열2): 문자열 1,2 합친 전체 문자열수가 전체 허용크기 내인지 확인
//	//char base[20] = "abc"; // 붙일 문자열이 충분한 크기를 가지고 있어야함
//	//char stn[] = "def";
//	//strcat_s(base, sizeof(base), stn);
//	//printf("%s\n", base);
//
//	////strcmp(문자열1, 문자열2): 문자열 1 == 문자열 2
//	//// 문자열이 같으면 0, 다르면 -1 or 1 출력
//	//char sameA[10] = "abc";
//	//char sameB[5] = "abe";
//	//char sameC[] = "abc";
//	//printf("sameA : %s\n", sameA);
//	//printf("sameB : %s\n", sameB);
//	//printf("sameC : %s\n", sameC);
//	//puts("");
//	//printf("sameA vs sameB: %d\n", strcmp(sameA, sameB));
//	////앞에서부터 하나씩 차례대로 비교, 다른 값이 나오면 그 값들 뺌(c-e, 아스키코드로) + 나오면 1, - 나오면 -1 출력됨
//	//printf("sameB vs sameC: %d\n", strcmp(sameB, sameC));
//	//printf("sameA vs sameC: %d\n", strcmp(sameA, sameC));
//	//puts("");
//	////if (strcmp(sameA, sameC)) 이러면 if 안에 조건문이 0이 나오기 때문에 else 됨,
//	//if (strcmp(sameA, sameC) == 0) // 이렇게 직접 참 조건으로 만들어 줘야됨
//	//	puts("같음");
//	//else
//	//	puts("틀림");
//}