//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main() {
//	/*
//	rand(): 0~32767 사이의 숫자 하나를 생성해서 반환
//	#include <stdlib.h> 필요
//
//	srand(초기값): rand()함수의 초기값을 설정해주는 함수
//
//	time(NULL): 1970년 1월 1일 0시 부터 현재까지의 시간을 초단위로 반환하는 함수
//	#include <time.h> 필요
//	*/
//	srand(time(NULL)); // rand()함수 범위 초기화
//	for (int i = 0; i < 10; i++) {
//		int data = rand() % 10 + 1;// 범위: rand % 갯수 + 시작값
//		// % 10 하면 10을 나누고 나머지니까 0~9까지만 나옴, 시작값을 1로 하고 싶으면 +1 하면됨
//		printf("%d\n", data);
//	}
//	puts("");
//	//아스키코드도 쌉가능
//	for (int i = 0; i < 10; i++) {
//		int al = rand() % 26 + 97; // 97부터 랜덤한 값이 26개 나옴
//		printf("%c\n", al);
//	}
//	
//}