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