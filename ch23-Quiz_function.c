#include <stdio.h>

//int withdraw();
//int ATM(int money, int balance);
//
//int main() {
//	// Q-2 ATM 기 코드를 작성하세요
//	//     - 현재 통장 잔액을 알력줍니다
//	//       출금 할 금액을 입려받습니다
//	//       출금이 가능하면 출금 후 남은 잔액을 알려줍니다
//	//       > 출금 조건 : 인출 금액은 10000원 단위로만 가능합니다( 10001원 X )
//	//                    인출 금액은 잔액보다 많을 수 없습니다
//	int balance = 100000;
//	printf("통장 잔액 : %d 원\n", balance);
//
//	int money = withdraw();
//
//	balance = ATM(money, balance);
//
//}
//
//int withdraw() {
//	int money;
//	printf("인출 금액 입력 > "); scanf_s("%d", &money);
//	puts("");
//	return money;
//}
//
//int ATM(int money, int balance) {
//	if (money > 0 && money % 10000 == 0 && money <= balance) {
//		balance -= money;
//		printf("%d 원 출금 성공\n", money);
//		printf("출금 후 잔액 : %d 원\n", balance); // 잔액 표시는 메인 함수에 넣는게 좋음
//	}
//	else {
//		puts("인출 금액 오류~");
//	}
//	printf("잔액 : %d 원\n", balance); // 잔액 표시는 메인 함수에 넣는게 좋음
//	return balance;
//}

//----------------------------------------------------------------------------------------------

//char UserCard();
//int bus(char userCard, int money);
//
//int main() {
//	// 버스단말기 코드를 작성하세요
//	// - 요금 : 일반(1250),  학생(720)
//	//   버스카드 잔액을 설정합니다
//	//   카드를 확인합니다( g : 일반, s : 학생 )
//	//   확인후에 차감된 금액을 알려주세요
//	int money = 2000;
//	printf("잔액 : %d 원\n", money);
//
//	char userCard = UserCard(); //변수랑 함수명이랑 똑같으면 안됨
//	puts("");
//
//	money = bus(userCard, money);
//
//	
//}
//
//char UserCard() {
//	char userCard;
//	printf("g : 일반 , s : 학생 > "); userCard = getchar();
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
//			puts("잔액이 부족합니다~");
//			cardCheck = 'n';
//		}
//		break;
//	case 's':
//		if (money >= student)
//			money -= student;
//		else {
//			puts("잔액이 부족합니다~");
//			cardCheck = 'n';
//		}
//		break;
//	default:
//		puts("카드를 확인하세요~");
//		cardCheck = 'n';
//	}
//	if (cardCheck == 'y') {
//		printf("삑! 잔액 : %d 원\n", money);
//		return money;
//	}
//}


//----------------------------------------------------------------------------------------------


//int add();
//
//int main() {
//	// 숫자 3개를 입력받고, 입력받은 수의 합을 구하는 코드를 작성하세요
//	// 더하는 값은 +(plus)만 가능하고, 입력 값은 모두 저장되어 있지 않아도 됩니다
//
//	int sum = add();
//
//	printf("입력 값의 합 : %d\n", sum);
//}
//
//int add() {
//	int data = 0;
//	int count = 1;
//	int sum = 0;
//	while (count <= 3) {
//		printf("%d 번째 입력 > ", count); scanf_s("%d", &data);
//		while (getchar() != '\n');
//		if (data >= 0) {
//			sum += data;
//			++count;
//		}
//	}
//	return sum;
//}