#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//void LifeCycle() {
//	//지역변수 - stack에 저장됨, 함수 끝나면 자동으로 사라짐
//	int a = 10;
//	//동적할당 - heap에 저장됨, 함수 끝나도 사라지지 않음, 사용 완료후 직접 삭제
//	int* p = (int*)malloc(sizeof(int)); // 함수 안에 동적할당 사용하면 함수 끝나고 나서도 사용할수 있음
//	*p = 20;
//
//}
//
//int main() {
//	//동적할당 사용방법
//	//int* p = (int*)malloc(sizeof(int));
//	//*p = 10;
//	//printf("*p : %d\n", *p);
//	//free(p);
//
//	//지역변수랑 동적할당 차이점
//	LifeCycle();
//	//LifeCycle()함수가 끝나도 동적할당으로 힙영역에 남아있는 데이터는 지워지지 않음
//	//함수가 끝나도 함수 안에 썻던 데이터를 사용하고 싶으면 동적할당을 사용, 위치만 알고 있으면됨
//
//}

//-------------------------------------------------------------------------------------------

//int* IntegerAlloc() { //주소값을 반환할수도 있음
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
//typedef struct { //기본이름 생략가능(자기 참조 구조체로 포인터 변수 사용하면 생략 불가)
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
//문자열

//char* InputString() {
//	char tmp[50];
//
//	printf("단어 입력 : ");
//	scanf_s("%s", tmp, sizeof(tmp));
//
//	char* s = (char*)malloc(strlen(tmp) + 1);
//	if (s != NULL) {
//		strcpy_s(s, strlen(tmp) + 1, tmp);
//	}
//	return s;  //s 는 함수가 끝나도 사용 가능
//}
//
//int main() {
//	char* stn = NULL; //문자는 널값으로 초기화
//	
//	stn = InputString();
//	printf("%s\n", stn);
//
//	free(stn);
//}


//-------------------------------------------------------------------------------------------

//int main() {
//	//int arr[300000];
//	//stack에서는 프로그램 사용할 용량만 있기 때문에 적은 용량만 가지고 있음
//	//큰 데이터를 쓸려면 힙영역을 사용해야됨
//
//	int size = 300000;
//
//	int* arr = (int*)malloc(sizeof(int) * size); //배열 크기 원하는 만큼 조절 가능
//	//int arr[300000]; //먹통임, stack 영역 초과
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
//	//int arr[300000]; 이렇게 하면 stack 메모리를 써서 이 정도 크기는 돌아가지 않음
//	//동적할당으로 heap영역쓰면 대용량 데이터 사용 가능
//	//꼭 사용하고 지워줘야됨
//}