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
//	// 이러면 ValueFunc안에 있는 a,b의 값만 바뀌고 메인 함수의 a,b는 바뀌지 않음
//
//	ReferenceFunc(&a, &b);
//	printf("a: %d - b: %d\n", a, b);
//	//주소를 알아야 주소의 값을 직접 사용할수 있음
//
//	//그냥 a: 호출해서 사용만 하면 값만 보내고
//	//*pa: 사용하고 수정까지 할려면 주소를 보내야됨
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
//	//return으로 할수없는걸 할수있음
//	//return은 하나의 값만 리턴할수있는데 포인터를 쓰면 여러개 값 수정 가능
//}



//---------------------------------------------------------------------------------------

//void InputString(char* stn, int size) { //배열은 주소기때문에 매개변수도 주소를 적어야됨
//	printf("단어 입력: ");
//	scanf_s("%s", stn, size); //sizeof(stn)는 포인터변수기때문에 무조건 4,8바이트밖에 안됨, 그래서 배열쓸때 크기 필요하면 크기까지 같이 넘겨야됨
//	//배열은 주소고, 매개변수는 포인터변수니 여기서 바뀌면 자동으로 바뀜
//}
//
//void AlterText(char* stn) {
//	//*stn -= 32; //*stn은 배열 맨첫번째 주소의 값임
//	stn[0] -= 32; //이거랑 똑같은 뜻임 *(stn+0) 이것도 됨
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
//	char s[] = "안녕하세요\n";
//	printf(s);
//	printf("안녕하세요\n"); //printf는 문자열을 통채로 보내는것이 아니라 주소를 보내는 것임
//
//	//int a = MessegeInput();
//	int a = MessegeInput("데이터 입력 > ");
//	int b = MessegeInput("정수 입력 > ");
//	int c= MessegeInput("숫자 입력 > ");
//	printf("a: %d\n", a);
//	printf("b: %d\n", b);
//	printf("c: %d\n", c);
//	// 이렇게 하면 입력 메세지를 메인함수에서 수정할수 있게됨
//}

//---------------------------------------------------------------------------------------

//void ShowArray(int* arr, int size) { //배열 받을땐 항상 주소를 매개변수! int* arr 는 int arr[] 이렇게 써도됨, 똑같은뜻
//	for (int i = 0; i < size; i++) {
//		//printf("%3d", arr[i]);
//		printf("%3d", *(arr+i));
//	}
//	puts("");
//}
//
//void InputArray(int arr[], int size) {
//	for (int i = 0; i < size; i++) {
//		printf("[%d] 출력 : ", i);
//		//scanf_s("%d", &arr[i]); //각 배열의 주소에 입력하기
//		scanf_s("%d", arr + i); //첫번째 주소부터 입력하기
//	}
//}
//
//int main() {
//
//	int iarr[] = { 11,22,33 };
//	int iarrsize = sizeof(iarr) / sizeof(int); //문자열일경우 1byte기때문에 나눌필요 없음
//
//	ShowArray(iarr, iarrsize);
//	InputArray(iarr, iarrsize);
//	ShowArray(iarr, iarrsize);
//}