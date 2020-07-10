#include <stdio.h>
#include <string.h>

/*
구조체:
	여러개의 변수, 배열을 하나로 묶어서 새로운 자료형을 만드는 것

구조체 선언:
	struct 구조체이름 {
		자료형 변수; // 멤버 필드, 필요한 만큼 만들 수 있음
		자료형 배열;
	};

사용 방법:
	struct 구조체이름 변수명;
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
//}Test2; // typedef랑 struct랑 합치는 방법, 이제 생성할때 struct test2 va; 도 되고 Test2 vb; 도 됨
//
//int main() {
//	Integer a = 10; // int a = 10; 이랑 똑같은거임
//
//	struct test va; //이렇게 선언하는 순간 필드 순서대로 공간 생김
//	Test vb;
//	
//	struct test2 va;
//	Test2 vb;
//}


//----------------------------------------------------------------

/*
멤버 필드 사용:
	구조체변수명.필드명 = 0;
	. : 멤버 필드 연산자
*/

//typedef struct person {
//	char name[20];
//	int age;
//}Person;
//
//int main() {
//	Person manA = { "none", 0 }; //구조체에 있는 여러개의 값에 접근하는건 생성할때만 할수있음
//	//manA = { "추신수", 30 }; 이건 에러
//	
//	strcpy_s(manA.name, sizeof(manA.name), "추신수"); //문자열은 이렇게 입력해야됨
//	manA.age = 30;
//	printf("이름 : %s\n", manA.name);
//	printf("나이 : %d\n", manA.age);
//	puts("");
//
//	//같은 구조체 변수끼리는 대입 연산자를 이용해서 한번에 값을 넘길 수 있음
//	Person manB;
//	manB = manA;
//	printf("이름 : %s\n", manB.name);
//	printf("나이 : %d\n", manB.age);
//	puts("");
//}


//----------------------------------------------------------------

/*
구조체 배열
*/

//typedef struct person {
//	char name[20];
//	int age;
//}Person;
//
//int main() {
//	Person arr[2] = { "유재석", 40, "박명수", 50 }; // 이렇게 순서대로 작성
//
//	int arrLength = sizeof(arr) / sizeof(Person);
//
//	for (int i = 0; i < arrLength; i++) {
//		printf("이름: %s - 나이: %d\n", arr[i].name, arr[i].age);
//	}
//}



//----------------------------------------------------------------
//구조체 안에 구조체 사용하기

//typedef struct person {
//	char name[20];
//	int age;
//}Person;
//
//typedef struct member {
//	char id[10];
//	Person basic; // 구조체 안에 구조체 사용 가능 - 자기 자신은 사용 불가
//}Member;
//
//int main() {
//	Member man = { "001", "김준현", 39 };
//
//	printf("ID : %s\n", man.id);
//	printf("이름 : %s\n", man.basic.name); // 이렇게 2번 들어가야됨
//	printf("나이 : %d\n", man.basic.age);
//	puts("");
//}



//----------------------------------------------------------------
//구조체 포인터 변수

//typedef struct person {
//	char name[20];
//	int age;
//}Person;
//
//int main() {
//	Person son = { "손흥민", 29 };
//	Person* p = &son;
//	//printf("이름: %s\n", *p.name); //에러: 연산자 우선순위에 밀려서 *보다 .이 먼저 계산됨
//	printf("이름: %s\n", (*p).name); //이렇게 ()써서 *먼저쓰게 해줘야됨
//	printf("이름: %s\n", p->name); //에로우 연산자, 위에걸 간편하게 쓰기 위함
//	printf("나이: %d\n", p->age);
//}


//----------------------------------------------------------------
//자기 참조 구조체
//배열을 이용하지 않아도 구조체끼리 값을 연결시킬 수 있음
//배열은 서로 물리적으로 연결되어있고, 구조체는 서로 떨어져 있지만 주소를 이용해서 연결시킴


//typedef struct data {
//	int value;
//	struct data* link; //자기 자신은 사용 못하는데 같은 타입의 주소값은 가질 수 있음
//}Data;
////data라는 struct에 int칸 하나랑 주소칸 하나 생성
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
//	//Data a에있는 주소칸에 연결할 Data의 int칸 연결
//
//	Data* current = start;
//	while (current != NULL) {
//		printf("%d\n", current->value);
//		current = current->link;
//	}
//}