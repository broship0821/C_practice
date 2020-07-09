#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 크기가 50인 문자열 배열을 선언하세요
// - 위 배열에 값을 입력하는 함수를 구현하세요
// - 위 배열안에서 소문자는 대문자로 변환하는 함수를 구현하세요

//void InputString(char text[], int size) {
//	printf("문자열 입력 : ");
//	scanf_s("%s", text, size);
//}
//
//void UpperString(char text[], int size) {
//	for (int i = 0; i < size; i++) {
//		if (text[i] >= 97 && text[i] <= 122)
//			text[i] -= 32;
//	}
//}
//
//int main() {
//	char text[50];
//	int textLength = sizeof(text);
//	InputString(text, textLength);
//	printf("입력한 문자열: %s\n", text);
//	UpperString(text, textLength);
//	printf("대문자로 변환: %s\n", text);
//}

//--------------------------------------------------------------------------------------

//// 정수 3개가 들어가는 배열을 선언하세요
//// - 위 배열을 1 ~ 5 사이의 랜덤값으로 초기화하는 함수를 구현하세요
//// - 위에 함수를 사용해서 배열안에 한번에 모두 같은값이 들어갈때 까지 진행하는 함수를 구현하세요
//
//void randNum(int arr[], int size) {
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < size; i++) {
//		arr[i] = rand() % 5 + 1;
//	}
//}
//
//void sameNum(int arr[], int size) {
//	srand((unsigned int)time(NULL));
//	int count = 1;
//	while (1) {
//		for (int i = 0; i < size; i++) {
//			arr[i] = rand() % 5 + 1;
//		}
//		printf("%d번째 시도!\n", count);
//		for (int i = 0; i < size; i++) {
//			printf("%3d", arr[i]);
//		}
//		puts("");
//		if (arr[0] == arr[1] && arr[0] == arr[2])
//			break;
//		count++;
//	}
//}
//
//int main() {
//	int data[3];
//	int dataLength = sizeof(data) / sizeof(int);
//
//	//randNum(data, dataLength);
//	sameNum(data, dataLength);
//
//	for (int i = 0; i < dataLength; i++) {
//		printf("%3d", data[i]);
//	}
//}


//선생님꺼----------------------------------------------------------------------------

//void InputString(char* stn, int size);
//void UpperString(char* stn);
//
//int Run(int arr[], int length);
//int RangeRandom(int start, int end);
//void SetData(int arr[], int length);
//void ShowData(int count, int arr[], int length);
//int SameData(int arr[], int length);
//
//int main() {
//
//	//// 크기가 50인 문자열 배열을 선언하세요
//	//// - 위 배열에 값을 입력하는 함수를 구현하세요
//	//// - 위 배열안에서 소문자는 대문자로 변환하는 함수를 구현하세요
//	//char text[50];
//	//InputString(text, sizeof(text));
//	//printf("text : %s\n", text);
//	//UpperString(text);
//	//printf("text : %s\n", text);
//
//
//
//	// 정수 3개가 들어가는 배열을 선언하세요
//	// - 위 배열을 1 ~ 5 사이의 랜덤값으로 초기화하는 함수를 구현하세요
//	// - 위에 함수를 사용해서 배열안에 한번에 모두 같은값이 들어갈때 까지 진행하는 함수를 구현하세요
//	int data[3];
//	int dataLength = sizeof(data) / sizeof(int);
//	Run(data, dataLength);
//
//}
//
//int RangeRandom(int start, int end) {
//	int range = end - start + 1;
//	return rand() % range + start;
//}
//
//void SetData(int arr[], int length) {
//	for (int i = 0; i < length; i++) {
//		arr[i] = RangeRandom(1, 13);
//	}
//}
//
//void ShowData(int count, int arr[], int length) {
//	printf("%3d 회 : ", count);
//	for (int i = 0; i < length; i++) {
//		printf("%-3d", arr[i]);
//	}
//	puts("");
//}
//
//int SameData(int arr[], int length) {
//	int n = arr[0];
//	for (int i = 1; i < length; i++) {
//		if (arr[i] != n)
//			return 0;
//	}
//	return 1;
//}
//
//int Run(int arr[], int length) {
//	int count = 0;
//	srand((unsigned int)time(NULL));
//	while (1) {
//		++count;
//		SetData(arr, length);          // 입력
//		ShowData(count, arr, length);  // 출력
//		if (SameData(arr, length))     // 같은값인지 확인
//			break;
//	}
//	return count;
//}
//
//void UpperString(char* stn) {
//	while (*stn != '\0') { // 이렇게 하면 size값 안받아도 됨
//		if (*stn >= 'a' && *stn <= 'z')
//			*stn -= 32;
//		++stn;
//	}
//}
//
//void InputString(char* stn, int size) {
//	printf("문장 입력 > "); gets_s(stn, size);
//}
