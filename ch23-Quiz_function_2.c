#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//// Q-1 정수를 입력받아서 반환하는 함수를 구현하세요
//// Q-2 1번의 함수를 사용해서 변수 2개를 각각 초기화합니다
////     두개의 수 중에서 큰수를 찾아서 반환하는 함수를 구현하세요
////     - 같은값이면 0을 반환합니다
//
//int inputInt();
//int bigNum(int num1, int num2);
//
//int main() {
//	
//	int num1 = inputInt();
//	int num2 = inputInt();
//	int bigger = bigNum(num1, num2);
//	printf("더 큰수: %d\n", bigger);
//}
//
//int inputInt() {
//	int num;
//	printf("정수 입력: ");
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

//// Q-3 알파벳 소문자를 입력받아서 반환하는 함수를 구현하세요
////     - 반환되는 값은 소문자만 가능합니다
//// Q-4 문자 하나를 넘겨받아서 소문자이면 대문자로 변환해서 반환하는 함수를 구현하세요
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
//		printf("소문자 한글자 입력: ");
//		scanf_s("%c", &alpha, 1);
//		while (getchar() != '\n');
//		if (alpha >= 97 && alpha <= 122) {
//			return alpha;
//		}
//		else
//			puts("다시 입력하세요");
//	}
//}
//
//char upperAlpha(char alpha) {
//	
//	return alpha - 32;
//}



//---------------------------------------------------------------------------------------------


//// Q-5 1 ~ 6 사이의 랜덤값을 반환하는 함수를 구현하세요
//// Q-6 5번의 함수를 사용해서 주사위 값을 가지는 변수 2개를 각각 초기화 합니다
////     두 주사위 값이 같을 때까지의 시도 횟수를 구하는 함수를 구현하세요
//
//int dice();
//int sameDice();
//
//int main() {
//	//srand(time(NULL)); // 이렇게 해야 현재 시간에서 2,3번째 랜덤한 값이 나올 수 있음
//	//int dice1 = dice();
//	//int dice2 = dice();
//	//printf("dice1 : %d, dice2 : %d\n", dice1, dice2);
//	srand(time(NULL));
//	int sameNumber = sameDice();
//	printf("두 주사위 값이 같을때까지 시도 횟수: %d\n", sameNumber);
//}
//
//int dice() {
//	//srand(time(NULL)); //이래버리면 seed가 현재 시간이 되고 항상 seed의 첫번째 값만 나옴
//	int data = rand() % 6 + 1;
//	return data;
//}
//
//int sameDice() {
//	int count = 0;
//	
//	int dice1 = dice(); //여기있는 것도 while문안에 넣어서 계속 새로 받게끔 해야됨
//	int dice2 = dice();
//	while (dice1 == dice2) {
//		count++;
//		return count;
//		
//	}
//}



//---------------------------------------------------------------------------------------------

//	// 터치 할 때마다 LED의 밝기가 변하는 코드를 작성하세요
//	// - 밝기가 변하는 값은 t 이고, e 이면 종료합니다
//	//   Ex> 터치 : t
//	//       LED : 50
//	//       터치 : t
//	//       LED : 100
//	//       터치 : t
//	//       LED : 0
//	//       터치 : y
//	//       LED : 0
//	//       터치 : e
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
//		printf("터치 : ");
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





///선생님꺼---------------------------------------------------------------------------------------

//#define BUFFER_EMPTY while(getchar()!='\n') //메크로 정의할때 함수도 사용 가능
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
//	//// Q-1 정수를 입력받아서 반환하는 함수를 구현하세요
//	//// Q-2 1번의 함수를 사용해서 변수 2개를 각각 초기화합니다
//	////     두개의 수 중에서 큰수를 찾아서 반환하는 함수를 구현하세요
//	////     - 같은값이면 0을 반환합니다
//	//int dataA = InputInteger();
//	//int dataB = InputInteger();
//	//int max = FindMax(dataA, dataB);
//	//ShowMax(dataA, dataB, max);
//
//
//
//	//// Q-3 알파벳 소문자를 입력받아서 반환하는 함수를 구현하세요
//	////     - 반환되는 값은 소문자만 가능합니다
//	//// Q-4 문자 하나를 넘겨받아서 소문자이면 대문자로 변환해서 반환하는 함수를 구현하세요
//	//char ch = LetterInput();
//	//char uch = UpperChar(ch);
//	//printf("%c 대문자 : %c\n", ch, uch);
//
//
//	//// Q-5 1 ~ 6 사이의 랜덤값을 반환하는 함수를 구현하세요
//	//// Q-6 5번의 함수를 사용해서 주사위 값을 가지는 변수 2개를 각각 초기화 합니다
//	////     두 주사위 값이 같을 때까지의 시도 횟수를 구하는 함수를 구현하세요
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
//		printf("소문자 입력 > "); value = getchar();
//		BUFFER_EMPTY;
//		if (value >= 'a' && value <= 'z')
//			break;
//	}
//	return value;
//}
//
//void ShowMax(int a, int b, int max) {
//	if (max != 0) {
//		printf("%d, %d 중 큰수 : %d\n", a, b, max);
//	}
//	else {
//		printf("%d, %d 는 같은수\n", a, b);
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
//	printf("숫자 입력 > "); scanf_s("%d", &value);
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
//		printf("%3d 회 : %d - %d\n", count, diceA, diceB);
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

