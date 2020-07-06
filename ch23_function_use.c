//#include <stdio.h>
//
////int InputInt();
////int Add(int a, int b);
////int LastTotal(int last);
////
////int main() {
////
////	//int dataA = InputInt();
////	//int dataB = InputInt(); // 함수 정의해놓으면 몇번이고 재사용 가능
////	//printf("dataA: %d - dataB: %d\n", dataA, dataB);
////	//Add(dataA, dataB);
////	LastTotal(100);
////}
////
////int LastTotal(int last) {
////	int tot = 0;
////	for (int i = 1; i <= last; i++) {
////		tot += i;
////	}
////	printf("1 ~ %d 까지의 합: %d\n", last, tot);
////	return tot;
////}
////
////int Add(int a, int b) {
////	printf("%d + %d = %d", a, b, a + b);
////	return a + b;
////}
////
////int InputInt() {
////	int value;
////	printf("숫자 입력: ");
////	scanf_s("%d", &value);
////	return value;
////}
//
////------------------------------------------------------------------------------------------------
//
////char InputSubject();
////int ShowSubject(char subject);
////
////int main() {
////	char subject = InputSubject();
////	//ShowSubject(subject);
////	if (ShowSubject(subject)) {
////		puts("열공하세요~");
////	}
////	else
////		puts("다시 선택하세요~");
////}
////
////int ShowSubject(char subject) {
////	switch (subject) {
////	case 'C':
////		puts("C언어 선택하셨습니다~");
////		//break;
////		return 1; // 이러면 아예 여기서 함수 종료
////	case 'J':
////		puts("Java 선택하셨습니다~");
////		//break;
////		return 1; // 여러번 사용 가능
////	default:
////		puts("없는 과목입니다~");
////	}
////	//puts(" - end - "); // return만나면 이 문장 실행하지 않음
////	return 0;
////}
////
////char InputSubject() {
////	char value;
////	printf("C: c언어, J: java 선택\n>>>>");
////	value = getchar();
////	return value;
////}
//
////------------------------------------------------------------------------------------------------
//
//
//// 메인함수 앞에 함수 정의 가능, 이때 선언할 필요 없음
//int InputInput() {
//	int value;
//	printf("숫자 입력 > ");
//	scanf_s("%d", &value);
//	while (getchar() != '\n');
//	return value;
//}
//
//int RangeInput(int start, int end) {
//	int value;
//	while (1) {
//		value = InputInput();
//		if (value >= start && value <= end)
//			break;
//	}
//	return value;
//}
//
//int main() {
//	int data = RangeInput(1, 10);
//	printf("입력 값: %d\n", data);
//}