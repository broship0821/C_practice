#include <stdio.h>
#include <string.h>

/*
����ü:
	�������� ����, �迭�� �ϳ��� ��� ���ο� �ڷ����� ����� ��

����ü ����:
	struct ����ü�̸� {
		�ڷ��� ����; // ��� �ʵ�, �ʿ��� ��ŭ ���� �� ����
		�ڷ��� �迭;
	};

��� ���:
	struct ����ü�̸� ������;
*/

//typedef int Integer;
//
//struct test {
//	int a;
//	char stn[20];
//};
//typedef struct test Test;
//
//typedef struct test2 {
//	int a;
//	double b;
//}Test2; // typedef�� struct�� ��ġ�� ���, ���� �����Ҷ� struct test2 va; �� �ǰ� Test2 vb; �� ��
//
//int main() {
//	Integer a = 10; // int a = 10; �̶� �Ȱ�������
//
//	struct test va; //�̷��� �����ϴ� ���� �ʵ� ������� ���� ����
//	Test vb;
//	
//	struct test2 va;
//	Test2 vb;
//}


//----------------------------------------------------------------

/*
��� �ʵ� ���:
	����ü������.�ʵ�� = 0;
	. : ��� �ʵ� ������
*/

//typedef struct person {
//	char name[20];
//	int age;
//}Person;
//
//int main() {
//	Person manA = { "none", 0 }; //����ü�� �ִ� �������� ���� �����ϴ°� �����Ҷ��� �Ҽ�����
//	//manA = { "�߽ż�", 30 }; �̰� ����
//	
//	strcpy_s(manA.name, sizeof(manA.name), "�߽ż�"); //���ڿ��� �̷��� �Է��ؾߵ�
//	manA.age = 30;
//	printf("�̸� : %s\n", manA.name);
//	printf("���� : %d\n", manA.age);
//	puts("");
//
//	//���� ����ü ���������� ���� �����ڸ� �̿��ؼ� �ѹ��� ���� �ѱ� �� ����
//	Person manB;
//	manB = manA;
//	printf("�̸� : %s\n", manB.name);
//	printf("���� : %d\n", manB.age);
//	puts("");
//}


//----------------------------------------------------------------

/*
����ü �迭
*/

//typedef struct person {
//	char name[20];
//	int age;
//}Person;
//
//int main() {
//	Person arr[2] = { "���缮", 40, "�ڸ��", 50 }; // �̷��� ������� �ۼ�
//
//	int arrLength = sizeof(arr) / sizeof(Person);
//
//	for (int i = 0; i < arrLength; i++) {
//		printf("�̸�: %s - ����: %d\n", arr[i].name, arr[i].age);
//	}
//}



//----------------------------------------------------------------
//����ü �ȿ� ����ü ����ϱ�

//typedef struct person {
//	char name[20];
//	int age;
//}Person;
//
//typedef struct member {
//	char id[10];
//	Person basic; // ����ü �ȿ� ����ü ��� ���� - �ڱ� �ڽ��� ��� �Ұ�
//}Member;
//
//int main() {
//	Member man = { "001", "������", 39 };
//
//	printf("ID : %s\n", man.id);
//	printf("�̸� : %s\n", man.basic.name); // �̷��� 2�� ���ߵ�
//	printf("���� : %d\n", man.basic.age);
//	puts("");
//}



//----------------------------------------------------------------
//����ü ������ ����

//typedef struct person {
//	char name[20];
//	int age;
//}Person;
//
//int main() {
//	Person son = { "�����", 29 };
//	Person* p = &son;
//	//printf("�̸�: %s\n", *p.name); //����: ������ �켱������ �з��� *���� .�� ���� ����
//	printf("�̸�: %s\n", (*p).name); //�̷��� ()�Ἥ *�������� ����ߵ�
//	printf("�̸�: %s\n", p->name); //���ο� ������, ������ �����ϰ� ���� ����
//	printf("����: %d\n", p->age);
//}


//----------------------------------------------------------------
//�ڱ� ���� ����ü
//�迭�� �̿����� �ʾƵ� ����ü���� ���� �����ų �� ����
//�迭�� ���� ���������� ����Ǿ��ְ�, ����ü�� ���� ������ ������ �ּҸ� �̿��ؼ� �����Ŵ


//typedef struct data {
//	int value;
//	struct data* link; //�ڱ� �ڽ��� ��� ���ϴµ� ���� Ÿ���� �ּҰ��� ���� �� ����
//}Data;
////data��� struct�� intĭ �ϳ��� �ּ�ĭ �ϳ� ����
//
//int main() {
//	Data a = { 10 };
//	Data b = { 20 };
//	Data c = { 30 };
//
//	Data* start = &a; //struct data* start = &a;
//	a.link = &b;
//	b.link = &c;
//	c.link = NULL;
//	//Data a���ִ� �ּ�ĭ�� ������ Data�� intĭ ����
//
//	Data* current = start;
//	while (current != NULL) {
//		printf("%d\n", current->value);
//		current = current->link;
//	}
//}