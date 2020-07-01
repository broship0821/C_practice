//#include <stdio.h>
//
//
//int main() {
//	//int point[][5] = { {2,10,3,1,8}, {9,4,6,5,7} };
//	////// 위 배열의 전체의 합, 각행의 합을 구하는 코드를 작성하세요
//	//int point_row = sizeof(point) / sizeof(point[0]);
//	//int point_col = sizeof(point[0]) / sizeof(int);
//	////int sum = 0;
//	////for (int i = 0; i < point_row; i++) {
//	////	for (int j = 0; j < point_col; j++) {
//	////		sum += point[i][j];
//	////	}
//	////}
//	////printf("배열 전체의 합: %d\n", sum);
//	////int sum0 = 0;
//	////for (int j = 0; j < point_col; j++) {
//	////	sum0 += point[0][j]; // sum0의 0와 point[0][j]의 0이 똑같음, 0을 i로 처리하면 됨
//	////}
//	////printf("배열 [0]행의 합: %d\n", sum1);
//	////int sum1 = 0;
//	////for (int j = 0; j < point_col; j++) {
//	////	sum1 += point[1][j];
//	////}
//	////printf("배열 [1]행의 합: %d\n", sum2);
//	//////선생님꺼
//	//int pointRow = sizeof(point) / sizeof(point[0]);
//	//int pointCol = sizeof(point[0]) / sizeof(int);
//	//int rowTot[2] = { 0 };   // 각 행의 합 sum0,sum1로 나눴던걸 이렇게 배열에 담으면 간단해짐
//	//int tot = 0;             // 전체의 합
//	//for (int i = 0; i < pointRow; i++) {
//
//	//	printf("point[%d] 행 : ", i);
//	//	for (int j = 0; j < pointCol; j++) {
//	//		printf("%3d", point[i][j]);
//	//		rowTot[i] += point[i][j]; // rowTot 첫번째 인덱스에 각 행별로 대입됨
//	//	}
//	//	puts("");
//	//	printf("합 : %d\n", rowTot[i]);
//	//	tot += rowTot[i];
//	//}
//	//printf("전체의 합 : %d\n", tot);
//
//	//int gugudan[8][9];
//	//// 위 배열에 구구단 값을 저장해서 출력하는 코드를 작성하세요
//	//int gugudan_row = sizeof(gugudan) / sizeof(gugudan[0]);
//	//int gugudan_col = sizeof(gugudan[0]) / sizeof(int);
//	//for (int i = 0; i < gugudan_row; i++) {
//	//	for (int j = 0; j < gugudan_col; j++) {
//	//		gugudan[i][j] = (i+2) * (j+1);
//	//		printf("%d * %d = %d\n", i+2, j+1, gugudan[i][j]);
//	//	}
//	//	puts("==========");
//	//}
//
//
//
//
//
//
//
//
//
//
//	////숫자 순서대로 출력하기
//	//int mat[5][5] = { 0 };
//	//int data;
//	//data = 1;
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		mat[i][j] = data++;
//	//		//data++;
//	//		printf("%3d", mat[i][j]);
//	//	}
//	//	puts("");
//	//}
//	//puts("");
//	//// 이거 역순으로 만들기
//	//data = 25;
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		mat[i][j] = data--;
//	//		printf("%3d", mat[i][j]);
//	//	}
//	//	puts("");
//	//}
//	//puts("");
//	////역순 만들기 2
//	//data = 1;
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		mat[4-i][4-j] = data++;
//	//	}
//	//	puts("");
//	//}
//	//puts("");
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		printf("%3d", mat[i][j]);
//	//	}
//	//	puts("");
//	//}
//	//puts("");
//	//// 세로로 출력
//	//data = 1;
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		mat[i][j] = data + j*5;
//	//		printf("%3d", mat[i][j]);
//	//	}
//	//	data++;
//	//	puts("");
//	//}
//	//puts("");
//	////선생님꺼
//	//data = 1;
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		mat[j][i] = data; //첫번째 열부터 삽입
//	//		++data;
//	//	}
//	//} // 이거는 대입때쓸 for문이랑 출력할때 쓰는 for문이랑 2개 필요
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		printf("%3d", mat[i][j]);
//	//	}
//	//	puts("");
//	//}
//	//puts("");
//	//// 지그재그로 출력 실패
//	//data = 1;
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		if (i % 2 == 0) {
//	//			mat[i][j] = data++;
//	//			printf("%3d", mat[i][j]);
//	//			//printf("%3d", 0);
//	//		}
//	//		else {
//	//			mat[i][j] = data++;
//	//			printf("%3d", mat[i][j]);
//	//		}
//	//	}
//	//	puts("");
//	//}
//	//puts("");
//	////선생님꺼
//	//for (int i = 0; i < 5; i++) {
//	//	if (i % 2 == 0) { // if문을 for문 밖에다 둬서 대입
//	//		for (int j = 4; j >= 0; j--) { // i행의 뒤에서부터 삽입
//	//			mat[i][j] = data;
//	//			++data;
//	//		}
//	//	}
//	//	else {
//	//		for (int j = 0; j < 5; j++) {
//	//			mat[i][j] = data;
//	//			++data;
//	//		}
//	//	}
//	//}
//	//// 다 대입 후 출력
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		printf("%3d", mat[i][j]);
//	//	}
//	//	puts("");
//	//}
//	//puts("");
//}