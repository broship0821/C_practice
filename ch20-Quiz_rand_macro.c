//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
////int main() {
////	//// 10개의 정수를 저장하는 배열을 선언하고, 70 ~ 100 사이의 값으로 초기화 합니다
////	//// 위 배열에서 80 ~ 90 사이의 값이 몇개 있는지를 구하는 코드를 작성하세요
////	//int data[10];
////	//int dataLength = sizeof(data) / sizeof(int);
////	//int sum = 0;
////	//srand(time(NULL));
////	//for (int i = 0; i < dataLength; i++) {
////	//	data[i] = rand() % 30 + 70; // 이거는 70~99임, % 31 + 70 이래야지 70~100까지됨
////	//	printf("data[%d] : %d\n", i, data[i]);
////	//	if (data[i] >= 80 && data[i] <= 90)
////	//		sum++;
////	//}
////	//printf("80~90사이의 숫자 개수: %d\n", sum);
////
////
////
////	// 정수 10개가 들어가는 배열을 선언하고 1 ~ 10 사이의 값으로 초기화 합니다
////	// 중복수는 들어 갈 수 없고, 숫자 7이 있는 곳의 위치를 찾아서 출력하는 코드를 작성하세요
////	int dataA[10] = { 0 };
////	int dataALength = sizeof(dataA) / sizeof(int);
////	int num = 0;
////	srand(time(NULL));
////	for (int i = 0; i < dataALength; i++) {
////		num = rand() % 10 + 1;
////		//중복값 확인 - 실패
////		for (int j = 0; j <= i; j++) {
////			if (num != dataA[j])
////				break;
////		}
////		dataA[i] = num;
////		
////		printf("dataA[%d] : %d\n", i, dataA[i]);
////		
////	}
////}
//
//
////선생님 풀이
//
//#define Q1_SIZE 10
//
//int main() {
//
//	srand((unsigned int)time(NULL));
//
//	//// 10개의 정수를 저장하는 배열을 선언하고, 70 ~ 100 사이의 값으로 초기화 합니다
//	//// 위 배열에서 80 ~ 90 사이의 값이 몇개 있는지를 구하는 코드를 작성하세요
//	//int q1[Q1_SIZE];
//	//int start = 70;
//	//int end = 100;
//	//int q1_range = end - start + 1;
//	//// 입, 출력
//	//for (int i = 0; i < Q1_SIZE; i++) {
//	//	q1[i] = rand() % q1_range + start;
//	//	printf("%4d", q1[i]);
//	//}
//	//puts("");
//	//printf("--- 80 ~ 90 사이의 데이터 ---\n");
//	//int count = 0;
//	//for (int i = 0; i < Q1_SIZE; i++) {
//	//	if (q1[i] >= 80 && q1[i] <= 90) {
//	//		++count;
//	//		printf("%4d", q1[i]);
//	//	}
//	//}
//	//puts("");
//	//printf("갯수 : %d\n", count);
//
//
//
//	//// 정수 10개가 들어가는 배열을 선언하고 1 ~ 10 사이의 값으로 초기화 합니다
//	//// 중복수는 들어 갈 수 없고, 숫자 7이 있는 곳의 위치를 찾아서 출력하는 코드를 작성하세요
//	//int data[10];
//	//int dataLength = sizeof(data) / sizeof(int);
//	//// 입력
//	//for (int i = 0; i < dataLength; i++) {
//	//	data[i] = rand() % dataLength + 1;
//	//	// 중복수 확인 : 현재 생성된 값이 이전에 만들어진 값중에 같은 값이 있는지 확인
//	//	for (int b = 0; b < i; b++) {
//	//		if (data[b] == data[i]) {
//	//			--i; // 이건 진짜 생각 못했다, 만약 똑같은 값있으면 반복문 다시 실행해라, 근데 이건 하나하나 다 체크해야되기때문에 느리다고함
//	//			break;
//	//		}
//	//	}
//	//}
//	//// 출력
//	//for (int i = 0; i < dataLength; i++) {
//	//	printf("%4d", data[i]);
//	//	if ((i + 1) % 10 == 0)
//	//		puts("");
//	//}
//	//puts("");
//
//	//// 7 위치 찾기
//	//int seven = 0;
//	//for (int i = 0; i < dataLength; i++) {
//	//	if (data[i] == 7)
//	//		seven = i;
//	//}
//	//
//	//for (int i = 0; i < seven; i++) {
//	//	printf("%s", "    ");
//	//}
//	//printf("   ^ \n"); // 위치 표현하는법, 근데 이 예제처럼  한번만 표시하는 것만 사용 가능할듯
//	//printf("7 위치 : %d\n", seven + 1);
//
//
//
//	//// 사용자 확인값을 생성하는 코드를 작성하세요
//	//// - 사용자 확인 값 : 0 ~ 9, A ~ Z(대문자) 의 조합 5개
//	//char userCode[6] = { 0 };
//	//for (int i = 0; i < 5; i++) {
//	//	int select = rand() % 2;   // 0 : 0 ~ 9 , 1 : A ~ Z
//	//	if (select == 0)
//	//		userCode[i] = rand() % ('9' - '0' + 1) + '0';
//	//	else
//	//		userCode[i] = rand() % ('Z' - 'A' + 1) + 'A';
//	//}
//	//printf("사용자 확인 : %s\n", userCode);
//
//
//
//}