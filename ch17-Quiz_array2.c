//#include <stdio.h>
//
//
//int main() {
//	//int point[][5] = { {2,10,3,1,8}, {9,4,6,5,7} };
//	////// �� �迭�� ��ü�� ��, ������ ���� ���ϴ� �ڵ带 �ۼ��ϼ���
//	//int point_row = sizeof(point) / sizeof(point[0]);
//	//int point_col = sizeof(point[0]) / sizeof(int);
//	////int sum = 0;
//	////for (int i = 0; i < point_row; i++) {
//	////	for (int j = 0; j < point_col; j++) {
//	////		sum += point[i][j];
//	////	}
//	////}
//	////printf("�迭 ��ü�� ��: %d\n", sum);
//	////int sum0 = 0;
//	////for (int j = 0; j < point_col; j++) {
//	////	sum0 += point[0][j]; // sum0�� 0�� point[0][j]�� 0�� �Ȱ���, 0�� i�� ó���ϸ� ��
//	////}
//	////printf("�迭 [0]���� ��: %d\n", sum1);
//	////int sum1 = 0;
//	////for (int j = 0; j < point_col; j++) {
//	////	sum1 += point[1][j];
//	////}
//	////printf("�迭 [1]���� ��: %d\n", sum2);
//	//////�����Բ�
//	//int pointRow = sizeof(point) / sizeof(point[0]);
//	//int pointCol = sizeof(point[0]) / sizeof(int);
//	//int rowTot[2] = { 0 };   // �� ���� �� sum0,sum1�� �������� �̷��� �迭�� ������ ��������
//	//int tot = 0;             // ��ü�� ��
//	//for (int i = 0; i < pointRow; i++) {
//
//	//	printf("point[%d] �� : ", i);
//	//	for (int j = 0; j < pointCol; j++) {
//	//		printf("%3d", point[i][j]);
//	//		rowTot[i] += point[i][j]; // rowTot ù��° �ε����� �� �ະ�� ���Ե�
//	//	}
//	//	puts("");
//	//	printf("�� : %d\n", rowTot[i]);
//	//	tot += rowTot[i];
//	//}
//	//printf("��ü�� �� : %d\n", tot);
//
//	//int gugudan[8][9];
//	//// �� �迭�� ������ ���� �����ؼ� ����ϴ� �ڵ带 �ۼ��ϼ���
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
//	////���� ������� ����ϱ�
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
//	//// �̰� �������� �����
//	//data = 25;
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		mat[i][j] = data--;
//	//		printf("%3d", mat[i][j]);
//	//	}
//	//	puts("");
//	//}
//	//puts("");
//	////���� ����� 2
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
//	//// ���η� ���
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
//	////�����Բ�
//	//data = 1;
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		mat[j][i] = data; //ù��° ������ ����
//	//		++data;
//	//	}
//	//} // �̰Ŵ� ���Զ��� for���̶� ����Ҷ� ���� for���̶� 2�� �ʿ�
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		printf("%3d", mat[i][j]);
//	//	}
//	//	puts("");
//	//}
//	//puts("");
//	//// ������׷� ��� ����
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
//	////�����Բ�
//	//for (int i = 0; i < 5; i++) {
//	//	if (i % 2 == 0) { // if���� for�� �ۿ��� �ּ� ����
//	//		for (int j = 4; j >= 0; j--) { // i���� �ڿ������� ����
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
//	//// �� ���� �� ���
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		printf("%3d", mat[i][j]);
//	//	}
//	//	puts("");
//	//}
//	//puts("");
//}