//#include <stdio.h>
//#include <string.h> // ���ڿ� ���� �Լ�
//
//int main() {
//	/*
//	���ڿ�
//	*/
//	//char wordA[10] = "string";
//	//printf("wordA: %s\n", wordA);
//
//	//char wordB[] = "good";
//	//printf("wordB: %s\n", wordB);
//	//// ���ڼ��� 4���� ũ��� �ΰ��� ���ؾ� �ϱ� ������ ũ��� 5��
//	//printf("wordB ũ��: %d\n", sizeof(wordB));
//	//// %s�� �ϸ� �ش� ���ڿ��� ���� �ּҸ� �б� �����ؼ� �ΰ��� ������ ������ �ҷ��� �׷��� �����Ҷ� +1���� �ʿ�
//	//char wordC[4] = "good";
//	//printf("wordC: %s\n", wordC);
//	////c���� ���ڿ��� �������� NULL(\0) r���� ����ؼ� ���ڿ��� ���� ǥ��
//	//puts("");
//	//char wordD[] = "Good luck";
//	//printf("wordD: %s\n", wordD);
//	//printf("wordD ũ��: %d\n", sizeof(wordD));
//	//wordD[2] = '\0'; // null ����
//	//printf("wordD: %s\n", wordD); // null���� ������ ����� ����
//	//printf("wordD ũ��: %d\n", sizeof(wordD)); // ����� ������� �����͸� �����Ѱ� �ƴ�
//
//	//for (int i = 0; i < sizeof(wordD); i++) {
//	//	putchar(wordD[i]);
//	//} // �̷��� ��ü ��� ����
//	//puts("");
//	//printf("���� �ּҺ��� Null\0 ���� ������ ���");
//
//
//	/*
//	���ڿ� �Լ�
//	strlen(���ڿ�):
//		null���� �������� ������ ���� ����ؼ� ��ȯ��(byte����)
//	*/
//
//	/*char text[100] = "Have a nice day";
//	printf("text: %s\n", text);
//	printf("text ũ�� : %d\n", sizeof(text));
//	printf("text ���ڼ� : %d\n", strlen(text));
//	int textLength = strlen(text);
//	printf("text ���ڼ� : %d\n", textLength);
//	puts("");
//	for (int i = 0; i < strlen(text); i++) {
//		putchar(text[i]);
//	}
//	puts("");
//
//	int idx = 0;
//	while (text[idx] != '\0') {
//		putchar(text[idx]);
//		idx++;
//	}
//	puts("");*/
//
//	////strcpy(���ڿ�1, ���ڿ�2): 2�� ���� 1�� ����
//	////strcpy_s(���ڿ�1, ���ũ��, ���ڿ�2): 2�� ���� 1�� �����Ҷ� ���ũ�� ������ Ȯ��
//	//char dataA[10];
//	//strcpy_s(dataA, sizeof(dataA), "����");
//	//printf("dataA: %s\n", dataA);
//	//strcpy_s(dataA, sizeof(dataA), "gkgkgk"); // �̷��� ���ڿ� ���� ����
//	//printf("dataA: %s\n", dataA);
//	//puts("");
//	//char dataB[] = "2020 C"; // dataA���� ū ���̰� ������ ������
//	//strcpy_s(dataA, sizeof(dataA), dataB);
//	//printf("dataA: %s\n", dataA);
//
//	////strcat(���ڿ�1, ���ڿ�2): ���ڿ�1 �ڿ� ���ڿ�2 �̾����
//	////strcat_s(���ڿ�1, ���ũ��, ���ڿ�2): ���ڿ� 1,2 ��ģ ��ü ���ڿ����� ��ü ���ũ�� ������ Ȯ��
//	//char base[20] = "abc"; // ���� ���ڿ��� ����� ũ�⸦ ������ �־����
//	//char stn[] = "def";
//	//strcat_s(base, sizeof(base), stn);
//	//printf("%s\n", base);
//
//	////strcmp(���ڿ�1, ���ڿ�2): ���ڿ� 1 == ���ڿ� 2
//	//// ���ڿ��� ������ 0, �ٸ��� -1 or 1 ���
//	//char sameA[10] = "abc";
//	//char sameB[5] = "abe";
//	//char sameC[] = "abc";
//	//printf("sameA : %s\n", sameA);
//	//printf("sameB : %s\n", sameB);
//	//printf("sameC : %s\n", sameC);
//	//puts("");
//	//printf("sameA vs sameB: %d\n", strcmp(sameA, sameB));
//	////�տ������� �ϳ��� ���ʴ�� ��, �ٸ� ���� ������ �� ���� ��(c-e, �ƽ�Ű�ڵ��) + ������ 1, - ������ -1 ��µ�
//	//printf("sameB vs sameC: %d\n", strcmp(sameB, sameC));
//	//printf("sameA vs sameC: %d\n", strcmp(sameA, sameC));
//	//puts("");
//	////if (strcmp(sameA, sameC)) �̷��� if �ȿ� ���ǹ��� 0�� ������ ������ else ��,
//	//if (strcmp(sameA, sameC) == 0) // �̷��� ���� �� �������� ����� ��ߵ�
//	//	puts("����");
//	//else
//	//	puts("Ʋ��");
//}