#include <stdio.h>

//int withdraw();
//int ATM(int money, int balance);
//
//int main() {
//	// Q-2 ATM �� �ڵ带 �ۼ��ϼ���
//	//     - ���� ���� �ܾ��� �˷��ݴϴ�
//	//       ��� �� �ݾ��� �Է��޽��ϴ�
//	//       ����� �����ϸ� ��� �� ���� �ܾ��� �˷��ݴϴ�
//	//       > ��� ���� : ���� �ݾ��� 10000�� �����θ� �����մϴ�( 10001�� X )
//	//                    ���� �ݾ��� �ܾ׺��� ���� �� �����ϴ�
//	int balance = 100000;
//	printf("���� �ܾ� : %d ��\n", balance);
//
//	int money = withdraw();
//
//	balance = ATM(money, balance);
//
//}
//
//int withdraw() {
//	int money;
//	printf("���� �ݾ� �Է� > "); scanf_s("%d", &money);
//	puts("");
//	return money;
//}
//
//int ATM(int money, int balance) {
//	if (money > 0 && money % 10000 == 0 && money <= balance) {
//		balance -= money;
//		printf("%d �� ��� ����\n", money);
//		printf("��� �� �ܾ� : %d ��\n", balance); // �ܾ� ǥ�ô� ���� �Լ��� �ִ°� ����
//	}
//	else {
//		puts("���� �ݾ� ����~");
//	}
//	printf("�ܾ� : %d ��\n", balance); // �ܾ� ǥ�ô� ���� �Լ��� �ִ°� ����
//	return balance;
//}

//----------------------------------------------------------------------------------------------

//char UserCard();
//int bus(char userCard, int money);
//
//int main() {
//	// �����ܸ��� �ڵ带 �ۼ��ϼ���
//	// - ��� : �Ϲ�(1250),  �л�(720)
//	//   ����ī�� �ܾ��� �����մϴ�
//	//   ī�带 Ȯ���մϴ�( g : �Ϲ�, s : �л� )
//	//   Ȯ���Ŀ� ������ �ݾ��� �˷��ּ���
//	int money = 2000;
//	printf("�ܾ� : %d ��\n", money);
//
//	char userCard = UserCard(); //������ �Լ����̶� �Ȱ����� �ȵ�
//	puts("");
//
//	money = bus(userCard, money);
//
//	
//}
//
//char UserCard() {
//	char userCard;
//	printf("g : �Ϲ� , s : �л� > "); userCard = getchar();
//	return userCard;
//}
//
//int bus(char userCard, int money) {
//	int general = 1250;
//	int student = 720;
//	char cardCheck = 'y';
//	switch (userCard) {
//	case 'g':
//		if (money >= general)
//			money -= general;
//		else {
//			puts("�ܾ��� �����մϴ�~");
//			cardCheck = 'n';
//		}
//		break;
//	case 's':
//		if (money >= student)
//			money -= student;
//		else {
//			puts("�ܾ��� �����մϴ�~");
//			cardCheck = 'n';
//		}
//		break;
//	default:
//		puts("ī�带 Ȯ���ϼ���~");
//		cardCheck = 'n';
//	}
//	if (cardCheck == 'y') {
//		printf("��! �ܾ� : %d ��\n", money);
//		return money;
//	}
//}


//----------------------------------------------------------------------------------------------


//int add();
//
//int main() {
//	// ���� 3���� �Է¹ް�, �Է¹��� ���� ���� ���ϴ� �ڵ带 �ۼ��ϼ���
//	// ���ϴ� ���� +(plus)�� �����ϰ�, �Է� ���� ��� ����Ǿ� ���� �ʾƵ� �˴ϴ�
//
//	int sum = add();
//
//	printf("�Է� ���� �� : %d\n", sum);
//}
//
//int add() {
//	int data = 0;
//	int count = 1;
//	int sum = 0;
//	while (count <= 3) {
//		printf("%d ��° �Է� > ", count); scanf_s("%d", &data);
//		while (getchar() != '\n');
//		if (data >= 0) {
//			sum += data;
//			++count;
//		}
//	}
//	return sum;
//}