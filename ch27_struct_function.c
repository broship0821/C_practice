//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
////구조체 Academy
//typedef struct academy {
//	int no;	  //번호
//	int cpp;  //점수
//	int java; //점수
//	int sum;  //총점
//}Academy;
//
////------ 함수 선언 ---------------------
//Academy CalcSum(Academy man);
//void InputPoint(Academy stu[], int stuLength);
//void PointSum(Academy* man);
//void PrintPoint(Academy stu[], int stuLength);
//void ShowTitle();
//void ShowPoint(Academy man);
//
//int BestStu(Academy stu[], int stuLength);
////선생님꺼
//int FindTop(Academy* stu, int length);
//void ShowTopPoint(Academy* stu, int top);
//
////------ 메인 함수 ---------------------------
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
//	// 최고 점수 학생의 위치를 찾아서 반환하는 함수를 구현하세요
//	int topIdx = FindTop(stu, stuLength);
//
//	// 최고 점수 학생의 성적을 출력하는 함수를 구현하세요
//	ShowTopPoint(stu, topIdx);
//	//내꺼 2문제 한꺼번에 했음
//	int BestStudent = BestStu(stu, stuLength);
//	printf("최고 점수는 %d번 학생 입니다.\n", BestStudent);
//	
//}
//
////------------------- 함수 정의 ------------------
//
//Academy CalcSum(Academy man) {
//	man.sum = man.cpp + man.java;
//	return man;
//}
//
//void InputPoint(Academy stu[], int stuLength) { //배열은 주소니까 값 바로 바껴서 void하면 됨
//	srand(time(NULL));
//	puts("----- 점수 입력 -----");
//	for (int i = 0; i < stuLength; i++) {
//		//직접입력하기
//		//stu[i].no = i + 1;
//		//printf("cpp 점수 입력 : ");
//		//scanf_s("%d", &stu[i].cpp);
//		//printf("java 점수 입력 : ");
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
//	puts("----- 학생 성적 -----");
//	ShowTitle();
//	for (int i = 0; i < stuLength; i++) {
//		ShowPoint(stu[i]);
//	}
//}
//
//void ShowTitle() {
//	printf("%4s %8s %8s %8s\n", "번호", "cpp", "java", "총점");
//}
//
//void ShowPoint(Academy man) {
//	printf("%4d %8d %8d %8d\n", man.no, man.cpp, man.java, man.sum);
//}
//
////최고 점수 학생 위치 찾기
//int BestStu(Academy stu[], int stuLength) {
//	int n = stu[0].sum;
//	for (int i = 1; i < stuLength; i++) {
//		if (n < stu[i].sum)
//			n = stu[i].sum;
//	}
//	printf("최고 점수 :%d\n", n);
//	for (int i = 0; i < stuLength; i++) {
//		if (stu[i].sum == n) {
//			printf("최고 점수 학생 성적: cpp-%d, java-%d, 총점-%d\n", stu[i].cpp, stu[i].java, stu[i].sum);
//			return stu[i].no;
//		}
//	}
//}
////선생님꺼
//void ShowTopPoint(Academy* stu, int top) {
//	puts("-----  최 고 점 수 학 생  -----");
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
