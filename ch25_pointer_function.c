#include <stdio.h>

//void ValueFunc(int a, int b) {
//	a += 100;
//	b += 100;
//}
//
//void ReferenceFunc(int* pa, int* pb) {
//	*pa += 100;
//	*pb += 100;
//}
//
//int main() {
//	int a = 10, b = 20;
//
//	ValueFunc(a, b);
//	printf("a: %d - b: %d\n", a, b);
//	// �̷��� ValueFunc�ȿ� �ִ� a,b�� ���� �ٲ�� ���� �Լ��� a,b�� �ٲ��� ����
//
//	ReferenceFunc(&a, &b);
//	printf("a: %d - b: %d\n", a, b);
//	//�ּҸ� �˾ƾ� �ּ��� ���� ���� ����Ҽ� ����
//
//	//�׳� a: ȣ���ؼ� ��븸 �ϸ� ���� ������
//	//*pa: ����ϰ� �������� �ҷ��� �ּҸ� �����ߵ�
//}

//---------------------------------------------------------------------------------------

//void ShowData(int a, int b) {
//	printf("%d - %d\n", a, b);
//}
//
//void SwapData(int* pa, int* pb) {
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main() {
//	int na = 5;
//	int nb = 7;
//	ShowData(na, nb);
//
//	SwapData(&na, &nb);
//	printf("%d - %d\n", na, nb);
//	//return���� �Ҽ����°� �Ҽ�����
//	//return�� �ϳ��� ���� �����Ҽ��ִµ� �����͸� ���� ������ �� ���� ����
//}



//---------------------------------------------------------------------------------------

//void InputString(char* stn, int size) { //�迭�� �ּұ⶧���� �Ű������� �ּҸ� ����ߵ�
//	printf("�ܾ� �Է�: ");
//	scanf_s("%s", stn, size); //sizeof(stn)�� �����ͺ����⶧���� ������ 4,8����Ʈ�ۿ� �ȵ�, �׷��� �迭���� ũ�� �ʿ��ϸ� ũ����� ���� �Ѱܾߵ�
//	//�迭�� �ּҰ�, �Ű������� �����ͺ����� ���⼭ �ٲ�� �ڵ����� �ٲ�
//}
//
//void AlterText(char* stn) {
//	//*stn -= 32; //*stn�� �迭 ��ù��° �ּ��� ����
//	stn[0] -= 32; //�̰Ŷ� �Ȱ��� ���� *(stn+0) �̰͵� ��
//}
//
//int main() {
//
//	char word[20];
//	InputString(word, sizeof(word));
//	printf("word: %s\n", word);
//	puts("");
//
//	char text[] = "google";
//	AlterText(text);
//	printf("text: %s\n", text);
//}



//---------------------------------------------------------------------------------------


//int MessegeInput(char* message) {
//	int value;
//	printf(message);
//	scanf_s("%d", &value);
//	return value;
//}
//
//int main() {
//	char s[] = "�ȳ��ϼ���\n";
//	printf(s);
//	printf("�ȳ��ϼ���\n"); //printf�� ���ڿ��� ��ä�� �����°��� �ƴ϶� �ּҸ� ������ ����
//
//	//int a = MessegeInput();
//	int a = MessegeInput("������ �Է� > ");
//	int b = MessegeInput("���� �Է� > ");
//	int c= MessegeInput("���� �Է� > ");
//	printf("a: %d\n", a);
//	printf("b: %d\n", b);
//	printf("c: %d\n", c);
//	// �̷��� �ϸ� �Է� �޼����� �����Լ����� �����Ҽ� �ְԵ�
//}

//---------------------------------------------------------------------------------------

//void ShowArray(int* arr, int size) { //�迭 ������ �׻� �ּҸ� �Ű�����! int* arr �� int arr[] �̷��� �ᵵ��, �Ȱ�����
//	for (int i = 0; i < size; i++) {
//		//printf("%3d", arr[i]);
//		printf("%3d", *(arr+i));
//	}
//	puts("");
//}
//
//void InputArray(int arr[], int size) {
//	for (int i = 0; i < size; i++) {
//		printf("[%d] ��� : ", i);
//		//scanf_s("%d", &arr[i]); //�� �迭�� �ּҿ� �Է��ϱ�
//		scanf_s("%d", arr + i); //ù��° �ּҺ��� �Է��ϱ�
//	}
//}
//
//int main() {
//
//	int iarr[] = { 11,22,33 };
//	int iarrsize = sizeof(iarr) / sizeof(int); //���ڿ��ϰ�� 1byte�⶧���� �����ʿ� ����
//
//	ShowArray(iarr, iarrsize);
//	InputArray(iarr, iarrsize);
//	ShowArray(iarr, iarrsize);
//}