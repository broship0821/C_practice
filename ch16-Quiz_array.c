//#include <stdio.h>
//
//
//int main() {
//	//int base[5];
//	//int base_length = sizeof(base) / sizeof(int);
//	//// �� �迭�� 1 ���� 1�� ������Ű�鼭 �ʱ�ȭ�ϴ� �ڵ带 �ۼ��ϼ���
//	//for (int i = 0; i < base_length; i++) {
//	//	base[i] = i+1;
//	//	printf("base[%d] = %d\n", i, base[i]);
//	//}
//	//puts("");
//	//// ���� �ϳ��� �Է¹ް�, �Է¹��� ����ŭ �� �迭�� ���� ������Ű�� �ڵ带 �ۼ��ϼ���
//	//int num;
//	//printf("���� �ϳ��� �Է��ϼ��� >> ");
//	//scanf_s("%d", &num);
//	//for (int i = 0; i < base_length; i++) {
//	//	base[i] = i+1+num;
//	//	printf("base[%d] = %d\n", i, base[i]);
//	//}
//	////�����Բ�
//	//// �Է�
//	//for (int i = 0; i < baseLength; i++) {
//	//	base[i] = i + 1;
//	//}
//	//// ���
//	//printf("base : ");
//	//for (int i = 0; i < baseLength; i++) {
//	//	printf("%3d", base[i]);
//	//}
//	//puts("");
//	//// ����
//	//int increase;
//	//printf("���� �� �Է� > "); scanf_s("%d", &increase);
//	//for (int i = 0; i < baseLength; i++) {
//	//	base[i] += increase;
//	//}
//	//// ���
//	//printf("base : ");
//	//for (int i = 0; i < baseLength; i++) {
//	//	printf("%3d", base[i]);
//	//}
//	//puts("");
//
//
//	//// base �迭�� ũ��� �Ȱ��� �迭�� �ϳ� �����ϰ�,
//	//// ���ο� �迭�� base �迭�� ���� �Ųٷ� �����ϴ� �ڵ带 �ۼ��ϼ���
//	//int base[5];
//	//int base_length = sizeof(base) / sizeof(int);
//	//for (int i = 0; i < base_length; i++) {
//	//	base[i] = i + 1;
//	//	printf("base[%d] = %d\n", i, base[i]);
//	//}
//	//puts("");
//	//int backBase[5];
//	//for (int i = 0; i < base_length; i++) {
//	//	backBase[i] = base[4 - i];
//	//	printf("backBase[%d] = %d\n", i, backBase[i]);
//	//}
//
//
//
//	//// ���� 5���� ���� �迭�� �����ϰ� ���� �Է��ϼ���
//	//// - �迭�ȿ��� ¦���� ��, ����, ���� ���ϴ� �ڵ带 �ۼ��ϼ���
//	//// - ���� ���� �� ��ġ, ���� ã�Ƽ� ����ϴ� �ڵ带 �ۼ��ϼ���
//	//// - ��ü ����� ���ϰ�, ��� ���� ���� �������� ������ ���ϴ� �ڵ带 �ۼ��ϼ���
//	//int ar5[] = { 12,34,42,65,2 };
//	//int ar5_length = sizeof(ar5) / sizeof(int);
//	//int count=0, sum=0;
//	//
//	//for (int i = 0; i < ar5_length; i++) {
//	//	if (ar5[i] % 2 == 0) {
//	//		count++;
//	//		sum += ar5[i];
//	//		printf("ar5���� ¦��: %d\n", ar5[i]);
//	//	}
//	//}
//	//printf("ar5 ¦�� ����: %d, ��: %d\n", count, sum);
//	//
//	//int min = ar5[0];
//	//for (int i = 1; i < ar5_length; i++) {
//	//	if (min > ar5[i])
//	//		min = ar5[i];
//	//}
//	//printf("ar5�� �ּҰ�: %d\n", min);
//	//for (int i = 1; i < ar5_length; i++) {
//	//	if (min == ar5[i])
//	//		printf("ar5 �ּҰ��� ��ġ: %d\n", i);
//	//}
//
//	//double avg;
//	//count = 0;
//	//for (int i = 0; i < ar5_length; i++) {
//	//	sum += ar5[i];
//	//}
//	//avg = (double)sum / ar5_length;
//	//printf("ar5�� ���: %.2f\n", avg);
//	//for (int i = 0; i < ar5_length; i++) {
//	//	if (ar5[i] > avg)
//	//		count++;
//	//}
//	//printf("��պ��� ���� ������ ����: %d\n", count);
//	////�����Բ�
//	//int data[5];
//	//int dataLength = sizeof(data) / sizeof(int);
//
//	//// �Է�, ��
//	//int tot = 0;
//	//for (int i = 0; i < dataLength; i++) {
//	//	printf("%d ��° �Է� > ", i + 1); scanf_s("%d", &data[i]);
//	//	tot += data[i];
//	//}
//	//puts("");
//
//	//// ���
//	//for (int i = 0; i < dataLength; i++) {
//	//	printf("%3d", data[i]);
//	//}
//	//puts("");
//
//	//// ¦�� ��, ����, ��
//	//int evenCnt = 0;
//	//int evenSum = 0;
//	//printf("even : "); // �� ��� ������ �ʿ� ���� �̷��� ����ص���
//	//for (int i = 0; i < dataLength; i++) {
//	//	if (data[i] % 2 == 0) {
//	//		printf("%3d", data[i]);
//	//		++evenCnt;
//	//		evenSum += data[i];
//	//	}
//	//}
//	//puts("");
//	//printf("evenCnt : %d - evenSum : %d\n", evenCnt, evenSum);
//	//puts("");
//
//	//// ���� �� ��ġ, ��
//	//int minIdx = 0;
//	//for (int i = 1; i < dataLength; i++) {
//	//	if (data[i] < data[minIdx])
//	//		minIdx = i;
//	//}
//	//printf("���� �� : %d - ��ġ : %d\n", data[minIdx], minIdx);
//	//puts("");
//
//	//// ��� ���� ���� ������ ��
//	//double avg = (double)tot / dataLength;
//	//printf("��� : %.1f\n", avg);
//	//int avgUp = 0;
//	//for (int i = 0; i < dataLength; i++) {
//	//	if (data[i] > avg) {
//	//		++avgUp;
//	//		printf("%3d", data[i]);
//	//	}
//	//}
//	//puts("");
//	//printf("��� ���� ���� ������ �� : %d\n", avgUp);
//
//}