//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
////����ü Academy
//typedef struct academy {
//	int no;	  //��ȣ
//	int cpp;  //����
//	int java; //����
//	int sum;  //����
//}Academy;
//
////------ �Լ� ���� ---------------------
//Academy CalcSum(Academy man);
//void InputPoint(Academy stu[], int stuLength);
//void PointSum(Academy* man);
//void PrintPoint(Academy stu[], int stuLength);
//void ShowTitle();
//void ShowPoint(Academy man);
//
//int BestStu(Academy stu[], int stuLength);
////�����Բ�
//int FindTop(Academy* stu, int length);
//void ShowTopPoint(Academy* stu, int top);
//
////------ ���� �Լ� ---------------------------
//int main() {
//	
//	/*Academy man = { 1,98,97 };
//	man = CalcSum(man);
//	printf("%d - %d, %d, %d\n", man.no, man.cpp, man.java, man.sum);
//	puts("");*/
//
//	Academy stu[3];
//	int stuLength = sizeof(stu) / sizeof(Academy);
//
//	InputPoint(stu, stuLength);
//	PrintPoint(stu, stuLength);
//
//	// �ְ� ���� �л��� ��ġ�� ã�Ƽ� ��ȯ�ϴ� �Լ��� �����ϼ���
//	int topIdx = FindTop(stu, stuLength);
//
//	// �ְ� ���� �л��� ������ ����ϴ� �Լ��� �����ϼ���
//	ShowTopPoint(stu, topIdx);
//	//���� 2���� �Ѳ����� ����
//	int BestStudent = BestStu(stu, stuLength);
//	printf("�ְ� ������ %d�� �л� �Դϴ�.\n", BestStudent);
//	
//}
//
////------------------- �Լ� ���� ------------------
//
//Academy CalcSum(Academy man) {
//	man.sum = man.cpp + man.java;
//	return man;
//}
//
//void InputPoint(Academy stu[], int stuLength) { //�迭�� �ּҴϱ� �� �ٷ� �ٲ��� void�ϸ� ��
//	srand(time(NULL));
//	puts("----- ���� �Է� -----");
//	for (int i = 0; i < stuLength; i++) {
//		//�����Է��ϱ�
//		//stu[i].no = i + 1;
//		//printf("cpp ���� �Է� : ");
//		//scanf_s("%d", &stu[i].cpp);
//		//printf("java ���� �Է� : ");
//		//scanf_s("%d", &stu[i].java);
//		//stu[i].sum = stu[i].cpp + stu[i].java;
//
//		stu[i].no = i + 1;
//		stu[i].cpp = rand() % 91 + 10;
//		stu[i].java = rand() % 91 + 10;
//		PointSum(stu + i); //PointSum(&stu[i]);
//	}
//}
//
//void PointSum(Academy* man) {
//	man->sum = man->cpp + man->java;
//}
//
//void PrintPoint(Academy stu[], int stuLength) {
//	puts("----- �л� ���� -----");
//	ShowTitle();
//	for (int i = 0; i < stuLength; i++) {
//		ShowPoint(stu[i]);
//	}
//}
//
//void ShowTitle() {
//	printf("%4s %8s %8s %8s\n", "��ȣ", "cpp", "java", "����");
//}
//
//void ShowPoint(Academy man) {
//	printf("%4d %8d %8d %8d\n", man.no, man.cpp, man.java, man.sum);
//}
//
////�ְ� ���� �л� ��ġ ã��
//int BestStu(Academy stu[], int stuLength) {
//	int n = stu[0].sum;
//	for (int i = 1; i < stuLength; i++) {
//		if (n < stu[i].sum)
//			n = stu[i].sum;
//	}
//	printf("�ְ� ���� :%d\n", n);
//	for (int i = 0; i < stuLength; i++) {
//		if (stu[i].sum == n) {
//			printf("�ְ� ���� �л� ����: cpp-%d, java-%d, ����-%d\n", stu[i].cpp, stu[i].java, stu[i].sum);
//			return stu[i].no;
//		}
//	}
//}
////�����Բ�
//void ShowTopPoint(Academy* stu, int top) {
//	puts("-----  �� �� �� �� �� ��  -----");
//	ShowPoint(stu[top]);
//}
//
//int FindTop(Academy* stu, int length) {
//	int top = 0;
//	for (int i = 1; i < length; i++) {
//		if (stu[i].sum > stu[top].sum)
//			top = i;
//	}
//	return top;
//}
//
