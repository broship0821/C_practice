//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	//// �ΰ��� �ܾ �Է¹޾Ƽ�, �ܾ����(ASCII �ڵ� ����)�� ���� ������ ����ϴ� �ڵ带 �ۼ��ϼ���
//	//// ���� ���� ����
//	//char dataA[10];
//	//printf("�ܾ� 2���� �Է��Ͻÿ�: ");
//	//scanf_s("%s", dataA, 10);
//	////�����Բ�
//	//char textA[20] = { '\0' }; // �̷��� �ظ��ϸ� �ʱ�ȭ �����ֱ�
//	//char textB[20] = { '\0' };
//	//printf("ù��° �ܾ� �Է� > "); scanf_s("%s", textA, sizeof(textA));
//	//printf("�ι�° �ܾ� �Է� > "); scanf_s("%s", textB, sizeof(textB));
//	//puts("");
//	//if (strcmp(textA, textB) < 0)
//	//	printf("%s , %s\n", textA, textB);
//	//else
//	//	printf("%s , %s\n", textB, textA);
//
//
//	//// �α��� ó�� �ڵ带 �����ϼ���
//	//// - �α��� Ȯ�ο� ����Ѵ� ID, PW �� ������ �����ϴ�
//	////   �α��� ID, PW�� �Է¹޾Ƽ� ������ ���� ���� �������� Ȯ���ؼ� ���� ���θ� �˷��ݴϴ�
//	//// - ������ ����� ID�� ����ؼ� email �ּҸ� �����ϴ� �ڵ带 �ۼ��ϼ���
//	////   Ex> ID : test
//	////       E-mail : test@smile.com
//	//char ID[] = "root";
//	//char PassWord[] = "1234";
//	//char checkID[10];
//	//char checkPassWord[10];
//	//printf("���̵� �Է��ϼ���: ");
//	//scanf_s("%s", checkID, sizeof(checkID));
//	//printf("��й�ȣ�� �Է��ϼ���: ");
//	//scanf_s("%s", checkPassWord, sizeof(checkPassWord));
//	//puts("");
//	//char email[] = "@smile.com";
//	//char userEmail[20];
//	//strcpy_s(userEmail, sizeof(userEmail), ID);
//	//if (strcmp(ID, checkID) == 0 && strcmp(PassWord, checkPassWord) == 0) {
//	//	puts("�α��� �ϼ̽��ϴ�");
//	//	strcat_s(userEmail, sizeof(userEmail), email);
//	//	printf("�̸��� ����: %s\n", userEmail);
//	//}
//	//else {
//	//	puts("���̵� �Ǵ� �н����带 �߸� �Է��ϼ̽��ϴ�");
//	//}
//	////�����Բ�
//	//char sid[20] = "test";
//	//char spw[20] = "1234";
//	//char uid[20] = { 0 };
//	//char upw[20] = { 0 };
//	//char email[50] = { 0 };
//	//strcpy_s(email, sizeof(email), sid);
//	//strcat_s(email, sizeof(email), "@smile.com");
//
//	//printf("ID �Է� > "); scanf_s("%s", uid, sizeof(uid));
//	//printf("PW �Է� > "); scanf_s("%s", upw, sizeof(upw));
//	//if (!strcmp(sid, uid) && !strcmp(spw, upw)) {
//	//	printf("%s���� �α��� �ϼ̽��ϴ�~ ^^\n", sid);
//	//	printf("E-mail : %s\n", email);
//	//}
//	//else {
//	//	puts("�����ڿ��� �����ϼ���~");
//	//}
//
//
//
//
//	//// �ܾ�(����)�� �Է¹ް�, �Է¹��� �ܾ ���ο� �迭�� �Ųٷ� �����ϴ� �ڵ带 �ۼ��ϼ���
//	//// - Ex> �ܾ� �Է� > abcde
//	////       reverse  > edcba
//	//// - ���� �ϳ��� �Է¹޾Ƽ�, ������ �Է¹��� ���ڿ��� �ش� ���ڰ� � �ִ����� ���ϴ� �ڵ带 �ۼ��ϼ���
//	//char wordA[100];
//	//printf("�ܾ� Ȥ�� ���� �Է�: ");
//	////scanf_s("%s", wordA, sizeof(wordA));
//	//gets_s(wordA, sizeof(wordA)); // gets���� ���� ����������
//	//char reverseA[100]; // ���� �ʱ�ȭ�� �����ָ� if�� �Ƚᵵ ��
//	//int reverseIdx = 0; //���� int reverseIdx = strlen(wordA) - 1;�� �ϸ� �� ������
//	//for (int i = 0; i <= strlen(wordA); i++) {
//	//	if (i < strlen(wordA)) {
//	//		reverseIdx = strlen(wordA) - i - 1;
//	//		reverseA[i] = wordA[reverseIdx];
//	//	}
//	//	else if (i == strlen(wordA)) {
//	//		reverseA[i] = wordA[i];
//	//	}
//	//}
//	//printf("wordA : %s\n", wordA);
//	//printf("reverseA : %s\n", reverseA);
//
//	////while (getchar() != '\n');
//	//char ca1;
//	//printf("���� �ϳ� �Է�: ");
//	//scanf_s("%c", &ca1, sizeof(ca1));
//	//puts("");
//	//int ca1Sum = 0;
//	//for (int i = 0; i < strlen(reverseA); i++) {
//	//	if (ca1 == reverseA[i]) {
//	//		ca1Sum++;
//	//	}
//	//}
//	//printf("%s �� %c�� ����: %d\n", reverseA, ca1, ca1Sum);
//	////�����Բ�
//	//char word[50] = { 0 };
//	//char reverse[50];// = { 0 };
//	//printf("���� �Է� > "); gets_s(word, sizeof(word));
//	//int rIdx = strlen(word) - 1; // ������ ���� ��ġ
//	//for (int i = 0; i < rIdx + 1; i++) {
//	//	reverse[rIdx - i] = word[i];
//	//}
//	//reverse[rIdx + 1] = '\0'; // �ʱ�ȭ �Ƚ���������� �������� �ι��� �־���ߵ�
//	//printf("word    : %s\n", word);
//	//printf("reverse : %s\n", reverse);
//	//puts("");
//
//	//char search;
//	//printf("�˻� ���� �Է� > "); search = getchar();
//	//int count = 0;
//	//for (int i = 0; i < strlen(word); i++) {
//	//	if (word[i] == search)
//	//		++count;
//	//}
//	//printf("%c ���ڼ� : %d\n", search, count);
//}