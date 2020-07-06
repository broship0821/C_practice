//#include <stdio.h>
//
//void Hi(); // 함수 선언: 프로그램 안에 사용자가 정의한 함수가 있음을 알려줌
//void DataSend(int param);
//double requestPi();
//char Request(char ch);
//
//int main() {
//	/*
//	함수:
//		하나의 기능을 가진 작은 프로그램
//		호출될 때 실행됨 실행이 끝나면 호출한 곳으로 원위치
//	*/
//	Hi(); // 함수 호출
//	//함수이름 (인자값)
//	//	인자값: 함수 실행에 필요한 데이터를 정의부로 보낼때 사용
//	//			타입, 개수, 순서가 매개변수랑 일치해야됨
//	int a = 100;
//	DataSend(a); // a랑 param은 서로 다른 함수에 위치하기 때문에 완전히 다른 변수임
//	
//	printf("%f\n", requestPi());
//	double pi = requestPi();
//	printf("pi: %f\n", pi);
//	
//	char ch = Request('A'); //이때 실행되면서 값 대입
//	printf("ch : %c\n", ch);
//}
//
//char Request(char ch) {
//	printf("받은 문자: %c\n", ch);
//	ch += 1;
//	return ch;
//}
//
//double requestPi() {
//	return 3.14592;
//}
//
//void DataSend(int param) {
//	printf("받은 데이터: %d\n", param);
//}
//
//void Hi() {
//	puts("안녕하세요~~");
//}
//// 함수 정의: 함수 호출시에 실행하는 기능 구현
//// 반환자료형 함수이름 (매개변수) {
////		실행 코드;
////		return 값;
//// }
//// 반환자료형: 함수 실행이 종료되면서 호출부로 돌아갈때 가져가는 값의 자료형
////				반환값이 없으면 void 사용
//// 함수이름: 함수 호출(실행)시에 사용되는 이름
//// 매개변수: 함수 실행시에 호출부에서 넘어오는 값을 보관하는 변수
//// return: 함수 실행에서 나온 결과물을 호출부로 보낼때 사용하거나 함수 실행을 종료시킬때 사용, 한 함수당 하나의 값만 리턴 가능
