//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <string.h>
//
//int main() {
//
//	//// double, char ������ �ϳ��� �����, �� ������ �ּҸ� ���ϴ� �����͸� �����ؼ� �ʱ�ȭ �մϴ�
//	//// �����͸� ����ؼ� �� ������ ���� ��/����ϴ� �ڵ带 �ۼ��ϼ���
//	//double dataA;
//	//char dataB;
//	//double* pA = &dataA;
//	//char* pB = &dataB;
//	//printf("�Ǽ� �Է�: ");
//	//scanf_s("%lf", pA); //scanf�� �ּҰ��� �־�ߵ�
//	//while (getchar() != '\n');
//	//printf("���� �Է�: ");
//	//scanf_s("%c", pB, 1);
//	//printf("dataA : %.1f - dataB : %c\n", *pA, *pB);
//	////�����Բ�
//	//double da;
//	//double* pda = &da;
//	//printf("�Ǽ� �Է� > "); scanf_s("%lf", pda);
//	//while (getchar() != '\n');
//	//printf("*pda : %.1f\n", *pda);
//	//puts("");
//
//	//char ca;
//	//char* pca = &ca;
//	//printf("���� �Է� > "); scanf_s("%c", pca, 1);
//	//printf("*pca : %c\n", *pca);
//
//
//
//
//	//// ���� 10���� ���� �迭�� �����ϼ���
//	//// �迭�� �ּҸ� ������ �����͸� �����, �����͸� ����ؼ� �迭�� 1 ~ 20������ ���������� �ʱ�ȭ�ϰ� ����ϼ���
//	//srand(time(NULL));
//	//int ar[10];
//	//int* par = ar;
//	//for (int i = 0; i < 10; i++) {
//	//	*(par + i) = rand() % 20 + 1; //pdata[i]�̷��� ǥ���� ����
//	//	printf("ar[%d] : %d\n", i, ar[i]);
//	//}
//	////�����Բ�
//	//int data[10];
//	//int* pdata = data;
//	//int dataLength = sizeof(data) / sizeof(int);
//
//	//srand((unsigned int)time(NULL));
//	//for (int i = 0; i < dataLength; i++) {
//	//	pdata[i] = rand() % 20 + 1;
//	//	printf("%3d", pdata[i]);
//	//}
//	//puts("");
//
//
//
//	//// ũ�Ⱑ 20�� ���ڿ� �迭�� �����ϼ���
//	//// - �迭�� �ּҸ� ������ �����͸� ���� ���ڿ��� �Է��մϴ�
//	//// - �����͸� ����ؼ� ���� �ϳ��� ����ϴ� �ڵ带 �ۼ��ϼ���
//	//char ch[20];
//	//char* pch = ch;
//	//printf("���ڿ� �Է�: ");
//	//scanf_s("%s", pch, sizeof(ch));
//	//	
//	//for (int i = 0; i < strlen(ch); i++) {
//	//	printf("ch[%d]: %c\n", i, *(pch + i));
//	//}
//	////�����Բ�
//	//char text[20];
//	//char* ptext = text;
//	//printf("���� �Է� > "); scanf_s("%s", ptext, sizeof(text));
//	//puts("");
//
//	//for (int i = 0; i < strlen(ptext); i++) { //strlen�� ���� ���� �ּҷκ��� null������ ������ ���°Ŵϱ� strlen(ptext)����
//	//	putchar(ptext[i]);
//	//}
//	//puts("");
//
//	//while (*ptext != '\0') {
//	//	putchar(*ptext);
//	//	++ptext; //������ ������ �ּҰ��� �ٲ�
//	//}
//	//puts("");
//}