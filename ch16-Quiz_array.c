//#include <stdio.h>
//
//
//int main() {
//	//int base[5];
//	//int base_length = sizeof(base) / sizeof(int);
//	//// 위 배열을 1 부터 1씩 증가시키면서 초기화하는 코드를 작성하세요
//	//for (int i = 0; i < base_length; i++) {
//	//	base[i] = i+1;
//	//	printf("base[%d] = %d\n", i, base[i]);
//	//}
//	//puts("");
//	//// 숫자 하나를 입력받고, 입력받은 수만큼 위 배열의 값을 증가시키는 코드를 작성하세요
//	//int num;
//	//printf("숫자 하나를 입력하세요 >> ");
//	//scanf_s("%d", &num);
//	//for (int i = 0; i < base_length; i++) {
//	//	base[i] = i+1+num;
//	//	printf("base[%d] = %d\n", i, base[i]);
//	//}
//	////선생님꺼
//	//// 입력
//	//for (int i = 0; i < baseLength; i++) {
//	//	base[i] = i + 1;
//	//}
//	//// 출력
//	//printf("base : ");
//	//for (int i = 0; i < baseLength; i++) {
//	//	printf("%3d", base[i]);
//	//}
//	//puts("");
//	//// 증가
//	//int increase;
//	//printf("증가 값 입력 > "); scanf_s("%d", &increase);
//	//for (int i = 0; i < baseLength; i++) {
//	//	base[i] += increase;
//	//}
//	//// 출력
//	//printf("base : ");
//	//for (int i = 0; i < baseLength; i++) {
//	//	printf("%3d", base[i]);
//	//}
//	//puts("");
//
//
//	//// base 배열의 크기와 똑같은 배열을 하나 생성하고,
//	//// 새로운 배열에 base 배열의 값을 거꾸로 저장하는 코드를 작성하세요
//	//int base[5];
//	//int base_length = sizeof(base) / sizeof(int);
//	//for (int i = 0; i < base_length; i++) {
//	//	base[i] = i + 1;
//	//	printf("base[%d] = %d\n", i, base[i]);
//	//}
//	//puts("");
//	//int backBase[5];
//	//for (int i = 0; i < base_length; i++) {
//	//	backBase[i] = base[4 - i];
//	//	printf("backBase[%d] = %d\n", i, backBase[i]);
//	//}
//
//
//
//	//// 정수 5개가 들어가는 배열을 선언하고 값을 입력하세요
//	//// - 배열안에서 짝수의 값, 갯수, 합을 구하는 코드를 작성하세요
//	//// - 가장 작은 값 위치, 값을 찾아서 출력하는 코드를 작성하세요
//	//// - 전체 평균을 구하고, 평균 보다 높은 데이터의 갯수를 구하는 코드를 작성하세요
//	//int ar5[] = { 12,34,42,65,2 };
//	//int ar5_length = sizeof(ar5) / sizeof(int);
//	//int count=0, sum=0;
//	//
//	//for (int i = 0; i < ar5_length; i++) {
//	//	if (ar5[i] % 2 == 0) {
//	//		count++;
//	//		sum += ar5[i];
//	//		printf("ar5중의 짝수: %d\n", ar5[i]);
//	//	}
//	//}
//	//printf("ar5 짝수 개수: %d, 합: %d\n", count, sum);
//	//
//	//int min = ar5[0];
//	//for (int i = 1; i < ar5_length; i++) {
//	//	if (min > ar5[i])
//	//		min = ar5[i];
//	//}
//	//printf("ar5의 최소값: %d\n", min);
//	//for (int i = 1; i < ar5_length; i++) {
//	//	if (min == ar5[i])
//	//		printf("ar5 최소값의 위치: %d\n", i);
//	//}
//
//	//double avg;
//	//count = 0;
//	//for (int i = 0; i < ar5_length; i++) {
//	//	sum += ar5[i];
//	//}
//	//avg = (double)sum / ar5_length;
//	//printf("ar5의 평균: %.2f\n", avg);
//	//for (int i = 0; i < ar5_length; i++) {
//	//	if (ar5[i] > avg)
//	//		count++;
//	//}
//	//printf("평균보다 높은 데이터 개수: %d\n", count);
//	////선생님꺼
//	//int data[5];
//	//int dataLength = sizeof(data) / sizeof(int);
//
//	//// 입력, 합
//	//int tot = 0;
//	//for (int i = 0; i < dataLength; i++) {
//	//	printf("%d 번째 입력 > ", i + 1); scanf_s("%d", &data[i]);
//	//	tot += data[i];
//	//}
//	//puts("");
//
//	//// 출력
//	//for (int i = 0; i < dataLength; i++) {
//	//	printf("%3d", data[i]);
//	//}
//	//puts("");
//
//	//// 짝수 값, 갯수, 합
//	//int evenCnt = 0;
//	//int evenSum = 0;
//	//printf("even : "); // 꼭 어디에 저장할 필요 없이 이렇게 출력해도됨
//	//for (int i = 0; i < dataLength; i++) {
//	//	if (data[i] % 2 == 0) {
//	//		printf("%3d", data[i]);
//	//		++evenCnt;
//	//		evenSum += data[i];
//	//	}
//	//}
//	//puts("");
//	//printf("evenCnt : %d - evenSum : %d\n", evenCnt, evenSum);
//	//puts("");
//
//	//// 작은 값 위치, 값
//	//int minIdx = 0;
//	//for (int i = 1; i < dataLength; i++) {
//	//	if (data[i] < data[minIdx])
//	//		minIdx = i;
//	//}
//	//printf("작은 값 : %d - 위치 : %d\n", data[minIdx], minIdx);
//	//puts("");
//
//	//// 평균 보다 높은 데이터 수
//	//double avg = (double)tot / dataLength;
//	//printf("평균 : %.1f\n", avg);
//	//int avgUp = 0;
//	//for (int i = 0; i < dataLength; i++) {
//	//	if (data[i] > avg) {
//	//		++avgUp;
//	//		printf("%3d", data[i]);
//	//	}
//	//}
//	//puts("");
//	//printf("평균 보다 높은 데이터 수 : %d\n", avgUp);
//
//}