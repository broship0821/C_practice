//#include <stdio.h>
//
//#define PI 3.141592
//#define MAX_SPEED 200
//#define ARRAY_SIZE 300
//#define CIRCLE_AREA(r) r * r * PI
////메크로 안에 다른 메크로 사용 가능
//
//int main() {
//	/*
//	macro:
//		프로그램에서 자주 사용하는 상수, 간단한 코드에 이름을 붙여서 사용하는것
//		ex) #define 이름 변환코드
//		자주 사용할거 같은거 이렇게 별명 붙여서 사용
//	*/
//	
//	//puts("--- 가속 시작 ---");
//	//for (int i = 0; i <= MAX_SPEED; i++) {
//	//	printf("속도: %3d km\n", i);
//	//}
//	//int size = 3;
//	////int arr[size]; 이렇게 배열 처음 생성할때 변수를 사용하면 에러남
//	//int arr[ARRAY_SIZE]; // 메크로 사용하면 이렇게 사용 가능, 안에있는 숫자 변경시에도 변수보다 편리함
//	//for (int i = 0; i < ARRAY_SIZE; i++) {
//	//	arr[i] = i + 1;
//	//	printf("%4d", arr[i]);
//	//	if ((i + 1) % 10 == 0)
//	//		puts("");
//	//}
//	//puts("");
//
//	/*printf("원주율: %f\n", PI);
//	printf("반지름 5인 원의 넓이: %.2f\n", CIRCLE_AREA(5));*/
//}