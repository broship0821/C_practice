#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//void LifeCycle() {
//	//�������� - stack�� �����, �Լ� ������ �ڵ����� �����
//	int a = 10;
//	//�����Ҵ� - heap�� �����, �Լ� ������ ������� ����, ��� �Ϸ��� ���� ����
//	int* p = (int*)malloc(sizeof(int)); // �Լ� �ȿ� �����Ҵ� ����ϸ� �Լ� ������ ������ ����Ҽ� ����
//	*p = 20;
//
//}
//
//int main() {
//	//�����Ҵ� �����
//	//int* p = (int*)malloc(sizeof(int));
//	//*p = 10;
//	//printf("*p : %d\n", *p);
//	//free(p);
//
//	//���������� �����Ҵ� ������
//	LifeCycle();
//	//LifeCycle()�Լ��� ������ �����Ҵ����� �������� �����ִ� �����ʹ� �������� ����
//	//�Լ��� ������ �Լ� �ȿ� ���� �����͸� ����ϰ� ������ �����Ҵ��� ���, ��ġ�� �˰� �������
//
//}

//-------------------------------------------------------------------------------------------

//int* IntegerAlloc() { //�ּҰ��� ��ȯ�Ҽ��� ����
//	return (int*)malloc(sizeof(int));
//}
//
//double* DoubleAlloc() {
//	return (double*)malloc(sizeof(double));
//}
//
//char* CharAlloc() {
//	return (char*)malloc(sizeof(char));
//}
//
//typedef struct { //�⺻�̸� ��������(�ڱ� ���� ����ü�� ������ ���� ����ϸ� ���� �Ұ�)
//	int a;
//	double b;
//}Data;
//
//Data* DataAlloc() {
//	return (Data*)malloc(sizeof(Data));
//}
//
//int main() {
//	int* ip = IntegerAlloc();
//	*ip = 10;
//	printf("*ip : %d\n", *ip);
//	puts("");
//
//	double* dp = DoubleAlloc();
//	*dp = 2.2;
//	printf("*dp : %.1f\n", *dp);
//	puts("");
//
//	char* cp = CharAlloc();
//	*cp = 'a';
//	printf("*cp : %c\n", *cp);
//	puts("");
//
//	Data* pdata = DataAlloc();
//	pdata->a = 100;
//	pdata->b = 5.5;
//	printf("%d - %.1f\n", pdata->a, pdata->b);
//	puts("");
//
//
//	free(ip);
//	free(dp);
//	free(cp);
//	free(pdata);
//}


//-------------------------------------------------------------------------------------------
//���ڿ�

//char* InputString() {
//	char tmp[50];
//
//	printf("�ܾ� �Է� : ");
//	scanf_s("%s", tmp, sizeof(tmp));
//
//	char* s = (char*)malloc(strlen(tmp) + 1);
//	if (s != NULL) {
//		strcpy_s(s, strlen(tmp) + 1, tmp);
//	}
//	return s;  //s �� �Լ��� ������ ��� ����
//}
//
//int main() {
//	char* stn = NULL; //���ڴ� �ΰ����� �ʱ�ȭ
//	
//	stn = InputString();
//	printf("%s\n", stn);
//
//	free(stn);
//}


//-------------------------------------------------------------------------------------------

//int main() {
//	//int arr[300000];
//	//stack������ ���α׷� ����� �뷮�� �ֱ� ������ ���� �뷮�� ������ ����
//	//ū �����͸� ������ �������� ����ؾߵ�
//
//	int size = 300000;
//
//	int* arr = (int*)malloc(sizeof(int) * size); //�迭 ũ�� ���ϴ� ��ŭ ���� ����
//	//int arr[300000]; //������, stack ���� �ʰ�
//
//	srand((unsigned int)time(NULL));
//	if (arr != NULL) {
//		for (int i = 0; i < size; i++) {
//			//*(arr + i) = rand() % 99 + 1;
//			arr[i] = rand() % 99 + 1;
//			printf("%3d ", arr[i]);
//			if ((i + 1) % 10 == 0)
//				puts("");
//		}
//	}
//
//	free(arr);
//
//	//int arr[300000]; �̷��� �ϸ� stack �޸𸮸� �Ἥ �� ���� ũ��� ���ư��� ����
//	//�����Ҵ����� heap�������� ��뷮 ������ ��� ����
//	//�� ����ϰ� ������ߵ�
//}