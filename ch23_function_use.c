//#include <stdio.h>
//
////int InputInt();
////int Add(int a, int b);
////int LastTotal(int last);
////
////int main() {
////
////	//int dataA = InputInt();
////	//int dataB = InputInt(); // �Լ� �����س����� ����̰� ���� ����
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
////	printf("1 ~ %d ������ ��: %d\n", last, tot);
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
////	printf("���� �Է�: ");
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
////		puts("�����ϼ���~");
////	}
////	else
////		puts("�ٽ� �����ϼ���~");
////}
////
////int ShowSubject(char subject) {
////	switch (subject) {
////	case 'C':
////		puts("C��� �����ϼ̽��ϴ�~");
////		//break;
////		return 1; // �̷��� �ƿ� ���⼭ �Լ� ����
////	case 'J':
////		puts("Java �����ϼ̽��ϴ�~");
////		//break;
////		return 1; // ������ ��� ����
////	default:
////		puts("���� �����Դϴ�~");
////	}
////	//puts(" - end - "); // return������ �� ���� �������� ����
////	return 0;
////}
////
////char InputSubject() {
////	char value;
////	printf("C: c���, J: java ����\n>>>>");
////	value = getchar();
////	return value;
////}
//
////------------------------------------------------------------------------------------------------
//
//
//// �����Լ� �տ� �Լ� ���� ����, �̶� ������ �ʿ� ����
//int InputInput() {
//	int value;
//	printf("���� �Է� > ");
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
//	printf("�Է� ��: %d\n", data);
//}