//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
////int main() {
////	//// 10���� ������ �����ϴ� �迭�� �����ϰ�, 70 ~ 100 ������ ������ �ʱ�ȭ �մϴ�
////	//// �� �迭���� 80 ~ 90 ������ ���� � �ִ����� ���ϴ� �ڵ带 �ۼ��ϼ���
////	//int data[10];
////	//int dataLength = sizeof(data) / sizeof(int);
////	//int sum = 0;
////	//srand(time(NULL));
////	//for (int i = 0; i < dataLength; i++) {
////	//	data[i] = rand() % 30 + 70; // �̰Ŵ� 70~99��, % 31 + 70 �̷����� 70~100������
////	//	printf("data[%d] : %d\n", i, data[i]);
////	//	if (data[i] >= 80 && data[i] <= 90)
////	//		sum++;
////	//}
////	//printf("80~90������ ���� ����: %d\n", sum);
////
////
////
////	// ���� 10���� ���� �迭�� �����ϰ� 1 ~ 10 ������ ������ �ʱ�ȭ �մϴ�
////	// �ߺ����� ��� �� �� ����, ���� 7�� �ִ� ���� ��ġ�� ã�Ƽ� ����ϴ� �ڵ带 �ۼ��ϼ���
////	int dataA[10] = { 0 };
////	int dataALength = sizeof(dataA) / sizeof(int);
////	int num = 0;
////	srand(time(NULL));
////	for (int i = 0; i < dataALength; i++) {
////		num = rand() % 10 + 1;
////		//�ߺ��� Ȯ�� - ����
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
////������ Ǯ��
//
//#define Q1_SIZE 10
//
//int main() {
//
//	srand((unsigned int)time(NULL));
//
//	//// 10���� ������ �����ϴ� �迭�� �����ϰ�, 70 ~ 100 ������ ������ �ʱ�ȭ �մϴ�
//	//// �� �迭���� 80 ~ 90 ������ ���� � �ִ����� ���ϴ� �ڵ带 �ۼ��ϼ���
//	//int q1[Q1_SIZE];
//	//int start = 70;
//	//int end = 100;
//	//int q1_range = end - start + 1;
//	//// ��, ���
//	//for (int i = 0; i < Q1_SIZE; i++) {
//	//	q1[i] = rand() % q1_range + start;
//	//	printf("%4d", q1[i]);
//	//}
//	//puts("");
//	//printf("--- 80 ~ 90 ������ ������ ---\n");
//	//int count = 0;
//	//for (int i = 0; i < Q1_SIZE; i++) {
//	//	if (q1[i] >= 80 && q1[i] <= 90) {
//	//		++count;
//	//		printf("%4d", q1[i]);
//	//	}
//	//}
//	//puts("");
//	//printf("���� : %d\n", count);
//
//
//
//	//// ���� 10���� ���� �迭�� �����ϰ� 1 ~ 10 ������ ������ �ʱ�ȭ �մϴ�
//	//// �ߺ����� ��� �� �� ����, ���� 7�� �ִ� ���� ��ġ�� ã�Ƽ� ����ϴ� �ڵ带 �ۼ��ϼ���
//	//int data[10];
//	//int dataLength = sizeof(data) / sizeof(int);
//	//// �Է�
//	//for (int i = 0; i < dataLength; i++) {
//	//	data[i] = rand() % dataLength + 1;
//	//	// �ߺ��� Ȯ�� : ���� ������ ���� ������ ������� ���߿� ���� ���� �ִ��� Ȯ��
//	//	for (int b = 0; b < i; b++) {
//	//		if (data[b] == data[i]) {
//	//			--i; // �̰� ��¥ ���� ���ߴ�, ���� �Ȱ��� �������� �ݺ��� �ٽ� �����ض�, �ٵ� �̰� �ϳ��ϳ� �� üũ�ؾߵǱ⶧���� �����ٰ���
//	//			break;
//	//		}
//	//	}
//	//}
//	//// ���
//	//for (int i = 0; i < dataLength; i++) {
//	//	printf("%4d", data[i]);
//	//	if ((i + 1) % 10 == 0)
//	//		puts("");
//	//}
//	//puts("");
//
//	//// 7 ��ġ ã��
//	//int seven = 0;
//	//for (int i = 0; i < dataLength; i++) {
//	//	if (data[i] == 7)
//	//		seven = i;
//	//}
//	//
//	//for (int i = 0; i < seven; i++) {
//	//	printf("%s", "    ");
//	//}
//	//printf("   ^ \n"); // ��ġ ǥ���ϴ¹�, �ٵ� �� ����ó��  �ѹ��� ǥ���ϴ� �͸� ��� �����ҵ�
//	//printf("7 ��ġ : %d\n", seven + 1);
//
//
//
//	//// ����� Ȯ�ΰ��� �����ϴ� �ڵ带 �ۼ��ϼ���
//	//// - ����� Ȯ�� �� : 0 ~ 9, A ~ Z(�빮��) �� ���� 5��
//	//char userCode[6] = { 0 };
//	//for (int i = 0; i < 5; i++) {
//	//	int select = rand() % 2;   // 0 : 0 ~ 9 , 1 : A ~ Z
//	//	if (select == 0)
//	//		userCode[i] = rand() % ('9' - '0' + 1) + '0';
//	//	else
//	//		userCode[i] = rand() % ('Z' - 'A' + 1) + 'A';
//	//}
//	//printf("����� Ȯ�� : %s\n", userCode);
//
//
//
//}