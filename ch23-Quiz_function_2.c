#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//// Q-1 ������ �Է¹޾Ƽ� ��ȯ�ϴ� �Լ��� �����ϼ���
//// Q-2 1���� �Լ��� ����ؼ� ���� 2���� ���� �ʱ�ȭ�մϴ�
////     �ΰ��� �� �߿��� ū���� ã�Ƽ� ��ȯ�ϴ� �Լ��� �����ϼ���
////     - �������̸� 0�� ��ȯ�մϴ�
//
//int inputInt();
//int bigNum(int num1, int num2);
//
//int main() {
//	
//	int num1 = inputInt();
//	int num2 = inputInt();
//	int bigger = bigNum(num1, num2);
//	printf("�� ū��: %d\n", bigger);
//}
//
//int inputInt() {
//	int num;
//	printf("���� �Է�: ");
//	scanf_s("%d", &num);
//	return num;
//}
//
//int bigNum(int num1, int num2) {
//	if (num1 > num2)
//		return num1;
//	else if (num1 < num2)
//		return num2;
//	else
//		return 0;
//}


//---------------------------------------------------------------------------------------------

//// Q-3 ���ĺ� �ҹ��ڸ� �Է¹޾Ƽ� ��ȯ�ϴ� �Լ��� �����ϼ���
////     - ��ȯ�Ǵ� ���� �ҹ��ڸ� �����մϴ�
//// Q-4 ���� �ϳ��� �Ѱܹ޾Ƽ� �ҹ����̸� �빮�ڷ� ��ȯ�ؼ� ��ȯ�ϴ� �Լ��� �����ϼ���
//
//char inputAlpha();
//char upperAlpha(char alpha);
//
//int main() {
//	char alpha = upperAlpha(inputAlpha());
//	printf("upperAlpha : %c\n", alpha);
//}
//
//char inputAlpha() {
//	char alpha;
//	while (1) {
//		printf("�ҹ��� �ѱ��� �Է�: ");
//		scanf_s("%c", &alpha, 1);
//		while (getchar() != '\n');
//		if (alpha >= 97 && alpha <= 122) {
//			return alpha;
//		}
//		else
//			puts("�ٽ� �Է��ϼ���");
//	}
//}
//
//char upperAlpha(char alpha) {
//	
//	return alpha - 32;
//}



//---------------------------------------------------------------------------------------------


//// Q-5 1 ~ 6 ������ �������� ��ȯ�ϴ� �Լ��� �����ϼ���
//// Q-6 5���� �Լ��� ����ؼ� �ֻ��� ���� ������ ���� 2���� ���� �ʱ�ȭ �մϴ�
////     �� �ֻ��� ���� ���� �������� �õ� Ƚ���� ���ϴ� �Լ��� �����ϼ���
//
//int dice();
//int sameDice();
//
//int main() {
//	//srand(time(NULL)); // �̷��� �ؾ� ���� �ð����� 2,3��° ������ ���� ���� �� ����
//	//int dice1 = dice();
//	//int dice2 = dice();
//	//printf("dice1 : %d, dice2 : %d\n", dice1, dice2);
//	srand(time(NULL));
//	int sameNumber = sameDice();
//	printf("�� �ֻ��� ���� ���������� �õ� Ƚ��: %d\n", sameNumber);
//}
//
//int dice() {
//	//srand(time(NULL)); //�̷������� seed�� ���� �ð��� �ǰ� �׻� seed�� ù��° ���� ����
//	int data = rand() % 6 + 1;
//	return data;
//}
//
//int sameDice() {
//	int count = 0;
//	
//	int dice1 = dice(); //�����ִ� �͵� while���ȿ� �־ ��� ���� �ްԲ� �ؾߵ�
//	int dice2 = dice();
//	while (dice1 == dice2) {
//		count++;
//		return count;
//		
//	}
//}



//---------------------------------------------------------------------------------------------

//	// ��ġ �� ������ LED�� ��Ⱑ ���ϴ� �ڵ带 �ۼ��ϼ���
//	// - ��Ⱑ ���ϴ� ���� t �̰�, e �̸� �����մϴ�
//	//   Ex> ��ġ : t
//	//       LED : 50
//	//       ��ġ : t
//	//       LED : 100
//	//       ��ġ : t
//	//       LED : 0
//	//       ��ġ : y
//	//       LED : 0
//	//       ��ġ : e
//	//       - Power off -
//
//int light(int LED);
//
//int main() {
//	int LED = 0;
//	light(LED);
//}
//int light(int LED) {
//	char touch;
//	while (1) {
//		printf("��ġ : ");
//		scanf_s("%c", &touch, 1);
//		while (getchar() != '\n');
//		if (touch == 't') {
//			if (LED < 100) {
//				LED += 50;
//			}
//			else if (LED >= 100) {
//				LED = 0;
//			}
//		}
//		else if (touch == 'e') {
//			break;
//		}
//		printf("LED : %d\n", LED);
//	}
//	puts(" - Power off - ");
//	return 0;
//}





///�����Բ�---------------------------------------------------------------------------------------

//#define BUFFER_EMPTY while(getchar()!='\n') //��ũ�� �����Ҷ� �Լ��� ��� ����
//
//int InputInteger();
//int FindMax(int a, int b);
//void ShowMax(int a, int b, int max);
//
//char LetterInput();
//char UpperChar(char ch);
//
//int RangeRandom(int start, int end);
//int DiceRun();
//
//int main() {
//
//	//// Q-1 ������ �Է¹޾Ƽ� ��ȯ�ϴ� �Լ��� �����ϼ���
//	//// Q-2 1���� �Լ��� ����ؼ� ���� 2���� ���� �ʱ�ȭ�մϴ�
//	////     �ΰ��� �� �߿��� ū���� ã�Ƽ� ��ȯ�ϴ� �Լ��� �����ϼ���
//	////     - �������̸� 0�� ��ȯ�մϴ�
//	//int dataA = InputInteger();
//	//int dataB = InputInteger();
//	//int max = FindMax(dataA, dataB);
//	//ShowMax(dataA, dataB, max);
//
//
//
//	//// Q-3 ���ĺ� �ҹ��ڸ� �Է¹޾Ƽ� ��ȯ�ϴ� �Լ��� �����ϼ���
//	////     - ��ȯ�Ǵ� ���� �ҹ��ڸ� �����մϴ�
//	//// Q-4 ���� �ϳ��� �Ѱܹ޾Ƽ� �ҹ����̸� �빮�ڷ� ��ȯ�ؼ� ��ȯ�ϴ� �Լ��� �����ϼ���
//	//char ch = LetterInput();
//	//char uch = UpperChar(ch);
//	//printf("%c �빮�� : %c\n", ch, uch);
//
//
//	//// Q-5 1 ~ 6 ������ �������� ��ȯ�ϴ� �Լ��� �����ϼ���
//	//// Q-6 5���� �Լ��� ����ؼ� �ֻ��� ���� ������ ���� 2���� ���� �ʱ�ȭ �մϴ�
//	////     �� �ֻ��� ���� ���� �������� �õ� Ƚ���� ���ϴ� �Լ��� �����ϼ���
//	//srand((unsigned int)time(NULL));
//	//DiceRun();
//
//
//}
//
//char UpperChar(char ch) {
//	if (ch >= 'a' && ch <= 'z')
//		return ch - 32;
//	return ch;
//}
//
//char LetterInput() {
//	char value;
//	while (1) {
//		printf("�ҹ��� �Է� > "); value = getchar();
//		BUFFER_EMPTY;
//		if (value >= 'a' && value <= 'z')
//			break;
//	}
//	return value;
//}
//
//void ShowMax(int a, int b, int max) {
//	if (max != 0) {
//		printf("%d, %d �� ū�� : %d\n", a, b, max);
//	}
//	else {
//		printf("%d, %d �� ������\n", a, b);
//	}
//}
//
//int FindMax(int a, int b) {
//	if (a > b) return a;
//	else if (b > a) return b;
//	else return 0;
//}
//
//int InputInteger() {
//	int value;
//	printf("���� �Է� > "); scanf_s("%d", &value);
//	BUFFER_EMPTY;
//	return value;
//}
//
//int DiceRun() {
//	int count = 0;
//	while (1) {
//		++count;
//		int diceA = RangeRandom(1, 6);
//		int diceB = RangeRandom(1, 6);
//		printf("%3d ȸ : %d - %d\n", count, diceA, diceB);
//		if (diceA == diceB)
//			break;
//	}
//	return count;
//}
//
//int RangeRandom(int start, int end) {
//
//	int range = end - start + 1;
//	return rand() % range + start;
//}

