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