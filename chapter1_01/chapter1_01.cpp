// chapter1_01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//


// 주석처리 : // 또는 /**/
#include <iostream> /* C++ 기본 입출력 */
#include <stdio.h> /* C 기본 입출력 */

//void main() // void main은 반환값x int main은 정수값 반환
//{
//	char M, N;
//	M = 'B';
//	N = 'e';
//	printf("%c\n", M);
//	printf("%c\n",N);
//}

void main() {
//	char H, S;
//	H = 65;
//	S = 97;
//	printf("%c\n", H);
//	printf("%c\n", S);
//	H = 'z';
//	S = 'Z';
//	printf("%c\n", H);
//	printf("%c\n", S);
//
	
	//float S, W;
	//S = 32.4;
	//W = 213748565.5;
	//printf("%f\n%f\n",S,W);
	
	//float circum, area;
	//const float PI = 3.141592;
	//float radius = 25;
	//area = PI * radius*radius;
	//circum = 2 * PI*radius; // 상수값
	//printf("Radius is %f\n" , radius);
	//printf("Area of circle is %f\n",area);
	//printf("Circum of circle is %f\n", circum);

	/*int i, j;
	float k;
	char ch;
	i = 100;
	j = 200;
	k = 12.345;
	ch = 'A';
	printf("%d %d\n",i,i+j);
	printf("%f\n",k);
	printf("%c %d",ch,ch);
	*/
	//char k, b, s;
	//k = 'k';
	//b = 66;
	//s = 's';
	//printf("%c %c %c\n",k,b,s);
	//printf("%d %d %d",k,b,s);

	//const float a = 3.141592;;
	//printf("%15f\n", a);
	//printf("%-15f\n", a);
	//printf("15.3f", a);
	
	/*char ch = 'A';
	printf("character = %c, ASCII = %d\n\n",ch,ch);
	printf("%12d\n", 123456789);
	printf("%-3d%-3d%-3d\n", 12,34,56);
	printf("%3d%3d\n", 12,34);
	printf("%03d%d%d", 3,16);
*/

	// 입력
	//int java, c, tot;
	//printf("자바 : \n");
	//scanf_s("%d", &java); // 표준입력 & :메모리에 접근
	//printf("C언어 : \n");
	//scanf_s("%d", &c);
	//tot = java + c;
	//printf("총점은 %d점 입니다.\n",tot);

	//int a, b , c;
	//char ch[5];
	//printf("사각형의 가로, 세로 길이를 입력하세요 : ");
	//scanf_s("%d %d", &a, &b);
	//c = a * b;
	//printf("사각형의 넓이 : %d\n============================================ \n이름 을 입력하세요 : ",c);
	//scanf_s("%s",&ch);
	//printf("%s" , ch);
	

	/* scanf_s : double(lf), float(f), int(d), 문자열(s) */
	// 밑변과 높이를 입력 받아 삼각형의 넓이와 둘레를 구하시오.
	//float a,b,c;
	//printf("정삼각형의 밑변을 입력하시오. ");
	//scanf_s( "%f",&a);
	//printf("정삼각형의 높이을 입력하시오. ");
	//scanf_s("%f",&b);
	//c = a * b / 2;
	//printf("정삼각형의 넓이 : %.2f",c);
	//c = a * 3;
	//printf("정삼각형의 둘레 : %.2f",c);

	char irum[10];
	printf("이름을 입력하세요.\n");
	scanf_s("%s",irum,sizeof(irum)); // sizeof() - 배열방의 크기  -  입력 받은 값만큼 메모리를 할당함.
	printf("성명 : %s\n", irum);

	// _~to~_s = 타입 변환을 위한 명령문 _atoi_s(바꾸려는 int 변수명) = 문자열을 int형으로 _itoa_s(바꾸려는 문자 변수명) = int형을 문자형으로
	
}




// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
