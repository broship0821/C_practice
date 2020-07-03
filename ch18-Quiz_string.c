//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	//// 두개의 단어를 입력받아서, 단어순서(ASCII 코드 참조)가 빠른 순서로 출력하는 코드를 작성하세요
//	//// 문제 이해 못함
//	//char dataA[10];
//	//printf("단어 2개를 입력하시요: ");
//	//scanf_s("%s", dataA, 10);
//	////선생님꺼
//	//char textA[20] = { '\0' }; // 이렇게 왠만하면 초기화 시켜주기
//	//char textB[20] = { '\0' };
//	//printf("첫번째 단어 입력 > "); scanf_s("%s", textA, sizeof(textA));
//	//printf("두번째 단어 입력 > "); scanf_s("%s", textB, sizeof(textB));
//	//puts("");
//	//if (strcmp(textA, textB) < 0)
//	//	printf("%s , %s\n", textA, textB);
//	//else
//	//	printf("%s , %s\n", textB, textA);
//
//
//	//// 로그인 처리 코드를 구현하세요
//	//// - 로그인 확인에 사용한느 ID, PW 를 설정해 놓습니다
//	////   로그인 ID, PW를 입력받아서 저장해 놓은 값과 같은지를 확인해서 성공 여부를 알려줍니다
//	//// - 위에서 사용한 ID를 사용해서 email 주소를 생성하는 코드를 작성하세요
//	////   Ex> ID : test
//	////       E-mail : test@smile.com
//	//char ID[] = "root";
//	//char PassWord[] = "1234";
//	//char checkID[10];
//	//char checkPassWord[10];
//	//printf("아이디를 입력하세요: ");
//	//scanf_s("%s", checkID, sizeof(checkID));
//	//printf("비밀번호를 입력하세요: ");
//	//scanf_s("%s", checkPassWord, sizeof(checkPassWord));
//	//puts("");
//	//char email[] = "@smile.com";
//	//char userEmail[20];
//	//strcpy_s(userEmail, sizeof(userEmail), ID);
//	//if (strcmp(ID, checkID) == 0 && strcmp(PassWord, checkPassWord) == 0) {
//	//	puts("로그인 하셨습니다");
//	//	strcat_s(userEmail, sizeof(userEmail), email);
//	//	printf("이메일 생성: %s\n", userEmail);
//	//}
//	//else {
//	//	puts("아이디 또는 패스워드를 잘못 입력하셨습니다");
//	//}
//	////선생님꺼
//	//char sid[20] = "test";
//	//char spw[20] = "1234";
//	//char uid[20] = { 0 };
//	//char upw[20] = { 0 };
//	//char email[50] = { 0 };
//	//strcpy_s(email, sizeof(email), sid);
//	//strcat_s(email, sizeof(email), "@smile.com");
//
//	//printf("ID 입력 > "); scanf_s("%s", uid, sizeof(uid));
//	//printf("PW 입력 > "); scanf_s("%s", upw, sizeof(upw));
//	//if (!strcmp(sid, uid) && !strcmp(spw, upw)) {
//	//	printf("%s님이 로그인 하셨습니다~ ^^\n", sid);
//	//	printf("E-mail : %s\n", email);
//	//}
//	//else {
//	//	puts("관리자에게 문의하세요~");
//	//}
//
//
//
//
//	//// 단어(문장)을 입력받고, 입력받은 단어를 새로운 배열에 거꾸로 저장하는 코드를 작성하세요
//	//// - Ex> 단어 입력 > abcde
//	////       reverse  > edcba
//	//// - 문자 하나를 입력받아서, 위에서 입력받은 문자열에 해당 문자가 몇개 있는지를 구하는 코드를 작성하세요
//	//char wordA[100];
//	//printf("단어 혹은 문장 입력: ");
//	////scanf_s("%s", wordA, sizeof(wordA));
//	//gets_s(wordA, sizeof(wordA)); // gets쓰면 버퍼 안지워도됨
//	//char reverseA[100]; // 여기 초기화를 시켜주면 if문 안써도 됨
//	//int reverseIdx = 0; //차라리 int reverseIdx = strlen(wordA) - 1;로 하면 더 간편함
//	//for (int i = 0; i <= strlen(wordA); i++) {
//	//	if (i < strlen(wordA)) {
//	//		reverseIdx = strlen(wordA) - i - 1;
//	//		reverseA[i] = wordA[reverseIdx];
//	//	}
//	//	else if (i == strlen(wordA)) {
//	//		reverseA[i] = wordA[i];
//	//	}
//	//}
//	//printf("wordA : %s\n", wordA);
//	//printf("reverseA : %s\n", reverseA);
//
//	////while (getchar() != '\n');
//	//char ca1;
//	//printf("문자 하나 입력: ");
//	//scanf_s("%c", &ca1, sizeof(ca1));
//	//puts("");
//	//int ca1Sum = 0;
//	//for (int i = 0; i < strlen(reverseA); i++) {
//	//	if (ca1 == reverseA[i]) {
//	//		ca1Sum++;
//	//	}
//	//}
//	//printf("%s 중 %c의 개수: %d\n", reverseA, ca1, ca1Sum);
//	////선생님꺼
//	//char word[50] = { 0 };
//	//char reverse[50];// = { 0 };
//	//printf("문장 입력 > "); gets_s(word, sizeof(word));
//	//int rIdx = strlen(word) - 1; // 마지막 문자 위치
//	//for (int i = 0; i < rIdx + 1; i++) {
//	//	reverse[rIdx - i] = word[i];
//	//}
//	//reverse[rIdx + 1] = '\0'; // 초기화 안시켜줬을경우 마지막에 널문자 넣어줘야됨
//	//printf("word    : %s\n", word);
//	//printf("reverse : %s\n", reverse);
//	//puts("");
//
//	//char search;
//	//printf("검색 문자 입력 > "); search = getchar();
//	//int count = 0;
//	//for (int i = 0; i < strlen(word); i++) {
//	//	if (word[i] == search)
//	//		++count;
//	//}
//	//printf("%c 문자수 : %d\n", search, count);
//}