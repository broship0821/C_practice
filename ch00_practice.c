//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	//����� ���α׷� �����
//	printf("---- �ͼ��� ����� ----");
//	char answer[20];
//	char rightAnswer[20];
//	int check;
//	//1�� ����
//	puts("\n\n");
//	printf("Ÿ��Ÿ���� ���� ��Ʈ���� �� ���� Ż�� ������?\n");
//	printf("���� >>> ");
//	scanf_s("%s", answer, sizeof(answer)); // ���� ������ �־���
//	puts("\n");
//	strcpy(rightAnswer, "9��"); // ���� ���� ĭ
//	check = strcmp(answer, rightAnswer);
//	if (check == 0)
//		puts("����!");
//	else
//		puts("��! ������: 9��(���� ��Ʈ)");
//	//2�� ����
//	puts("\n");
//	puts("---- ���� ���� ----");
//	puts("");
//	printf("���� ���ε� ���ϰ���̿��� ���� ��︮�� ����?\n"); //���� ���� ĭ
//	printf("���� >>> ");
//	scanf_s("%s", answer, sizeof(answer));
//	puts("\n");
//	strcpy(rightAnswer, "�߱ݾ߱�"); // ���� ���� ĭ
//	check = strcmp(answer, rightAnswer);
//	if (check == 0)
//		puts("����!");
//	else
//		printf("��! ������: %s\n", rightAnswer);
//	//3�� ����
//	puts("\n");
//	puts("---- ���� ���� ----");
//	puts("");
//	printf("�� �߿� ���� ���� ����?\n"); //���� ���� ĭ
//	printf("���� >>> ");
//	scanf_s("%s", answer, sizeof(answer));
//	puts("\n");
//	strcpy(rightAnswer, "�̺�"); // ���� ���� ĭ
//	check = strcmp(answer, rightAnswer);
//	if (check == 0)
//		puts("����!");
//	else
//		printf("��! ������: %s\n", rightAnswer);
//	//4�� ����
//	puts("\n");
//	puts("---- ���� ���� ----");
//	puts("");
//	printf("����� ��ĥ �� ���� ����?\n"); //���� ���� ĭ
//	printf("���� >>> ");
//	scanf_s("%s", answer, sizeof(answer));
//	puts("\n");
//	strcpy(rightAnswer, "����"); // ���� ���� ĭ
//	check = strcmp(answer, rightAnswer);
//	if (check == 0)
//		puts("����!");
//	else
//		printf("��! ������: %s\n", rightAnswer);
//	//5�� ����
//	puts("\n");
//	puts("---- ���� ���� ----");
//	puts("");
//	printf("���� �Ѿ����� �����ɱ�?\n"); //���� ���� ĭ
//	printf("���� >>> ");
//	scanf_s("%s", answer, sizeof(answer));
//	puts("\n");
//	strcpy(rightAnswer, "ŷ��"); // ���� ���� ĭ
//	check = strcmp(answer, rightAnswer);
//	if (check == 0)
//		puts("����!");
//	else
//		printf("��! ������: %s\n", rightAnswer);
//}