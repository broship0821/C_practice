#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ũ�Ⱑ 50�� ���ڿ� �迭�� �����ϼ���
// - �� �迭�� ���� �Է��ϴ� �Լ��� �����ϼ���
// - �� �迭�ȿ��� �ҹ��ڴ� �빮�ڷ� ��ȯ�ϴ� �Լ��� �����ϼ���

//void InputString(char text[], int size) {
//	printf("���ڿ� �Է� : ");
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
//	printf("�Է��� ���ڿ�: %s\n", text);
//	UpperString(text, textLength);
//	printf("�빮�ڷ� ��ȯ: %s\n", text);
//}

//--------------------------------------------------------------------------------------

//// ���� 3���� ���� �迭�� �����ϼ���
//// - �� �迭�� 1 ~ 5 ������ ���������� �ʱ�ȭ�ϴ� �Լ��� �����ϼ���
//// - ���� �Լ��� ����ؼ� �迭�ȿ� �ѹ��� ��� �������� ���� ���� �����ϴ� �Լ��� �����ϼ���
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
//		printf("%d��° �õ�!\n", count);
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


//�����Բ�----------------------------------------------------------------------------

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
//	//// ũ�Ⱑ 50�� ���ڿ� �迭�� �����ϼ���
//	//// - �� �迭�� ���� �Է��ϴ� �Լ��� �����ϼ���
//	//// - �� �迭�ȿ��� �ҹ��ڴ� �빮�ڷ� ��ȯ�ϴ� �Լ��� �����ϼ���
//	//char text[50];
//	//InputString(text, sizeof(text));
//	//printf("text : %s\n", text);
//	//UpperString(text);
//	//printf("text : %s\n", text);
//
//
//
//	// ���� 3���� ���� �迭�� �����ϼ���
//	// - �� �迭�� 1 ~ 5 ������ ���������� �ʱ�ȭ�ϴ� �Լ��� �����ϼ���
//	// - ���� �Լ��� ����ؼ� �迭�ȿ� �ѹ��� ��� �������� ���� ���� �����ϴ� �Լ��� �����ϼ���
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
//	printf("%3d ȸ : ", count);
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
//		SetData(arr, length);          // �Է�
//		ShowData(count, arr, length);  // ���
//		if (SameData(arr, length))     // ���������� Ȯ��
//			break;
//	}
//	return count;
//}
//
//void UpperString(char* stn) {
//	while (*stn != '\0') { // �̷��� �ϸ� size�� �ȹ޾Ƶ� ��
//		if (*stn >= 'a' && *stn <= 'z')
//			*stn -= 32;
//		++stn;
//	}
//}
//
//void InputString(char* stn, int size) {
//	printf("���� �Է� > "); gets_s(stn, size);
//}
