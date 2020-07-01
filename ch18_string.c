//#include <stdio.h>
//
//
//int main() {
//	/*
//	문자열
//	*/
//	char wordA[10] = "string";
//	printf("wordA: %s\n", wordA);
//
//	char wordB[] = "good";
//	printf("wordB: %s\n", wordB);
//	// 글자수는 4지만 크기는 널값을 더해야 하기 때문에 크기는 5임
//	printf("wordB 크기: %d\n", sizeof(wordB));
//	// %s를 하면 해당 문자열의 시작 주소를 읽기 시작해서 널값을 만나기 전까지 불러옴 그래서 생성할때 +1공간 필요
//	char wordC[4] = "good";
//	printf("wordC: %s\n", wordC);
//	//c언어는 문자열의 마지막에 NULL(\0) r값을 사용해서 문자열의 끝을 표시
//}