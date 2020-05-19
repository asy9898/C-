#include <stdio.h> //C표준입출력
#include <iostream> //C++ 표준입출력
#include <string>  // 문자열
#include <sstream> // 클래스형 객체를 만듦.
#include <iomanip> //입출력 기본 폼
#include <conio.h>

using namespace std;



//void main() {
//
//	//using namespace std; 미사용시 접두어 첨부
//	//std::cout << "Helllo c++" << std::endl;
//	//using namespace std; 사용시
//	cout << "Hello c++" << endl;
//
//	char name[] = "choi kuy ri";
//	int kor, eng, mat, tot;
//	double avg;
//	kor = 90;
//	eng = 85;
//	mat = 70;
//	tot = kor + eng + mat;
//	avg = tot / 3.0;
//	
//	//c 출력
//	printf("***************C언어 출력 함수***************\n");
//	printf("    name    kor eng mat tot avg\n");
//	printf("%10s%3d%4d%4d%5d%5.1lf\n",name,kor,eng,mat,tot,avg);
//
//	//c++ 출력
//	cout << endl << "***************C++언어 출력 함수***************\n";
//		cout << "    name    kor eng mat tot avg\n"<<endl;
//	cout << setw(10) << name << setw(3)<<kor<<setw(4)<<eng << setw(4) << mat << setw(5) << tot << setw(5) << setprecision(3)<<avg<<endl;
//
//
//
//}


//void main() {
//	int number;
//	cout << "숫자 입력 받기 : " ;
//	cin >> number;
//	cout << "출력 :: "<<number<<endl;
//
//	char dan[15];
//	cout << "문자 입력받기 : ";
//	cin >> dan;
//	cout << "출력 : " << dan << endl;
//	cout << "멈추려면 숫자 0 을 누르시오." << endl;
//	_getch();  // 사용시 include<conio.h> 필요
//	cout << endl;
//}

//int main() {
//
//	int n;
//	stringstream ss;
//	ss.str("12 345 6789 0 -12");
//
//	for (int i = 0; i < 5; i++) {
//	ss >> n;
//	cout << n << endl;
//	}
//	return 0;
//}

//void main() {
//
//	cout << setw(10) << "753-9510" << "ㅣ" << endl;
//	cout << setiosflags(ios::left);  // 왼쪽으로 정렬
//	cout << setw(10) << "753-9510" << "ㅣ"<<endl;
//	cout << setw(10) << 3.14 << "ㅣ" <<endl;
//	cout << setprecision(6);
//	cout << setw(10) << setiosflags(ios::showpoint) << 3.14 << endl;
//	cout << resetiosflags(ios::left);   // 왼쪽으로 정렬해제
//	cout << setw(10) << "World" << "ㅣ" << endl;
//	cout << setiosflags(ios::left) << setw(10) << "World" << "ㅣ" << endl;
//
//}

//void main() {
//	char name[15];
//	char address[20];
//	cout << "이름을 입력하세요 : ";
//	cin.get(name,15);
//	cin.ignore(); // 엔터를 무시하도록 하기위해 넣어주는 메소드
//	cout << "address : ";
//	cin.get(address, 20);
//	cout << "\nname : " << name << endl;
//	cout << "\naddress : " << address;
//}

void main() {
	//char name[15];
	//char address[20];
	//cout << "이름을 입력하세요 : ";
	//cin.getline(name,15);
	//cout << "address : ";
	//cin.getline(address, 20);
	//cout << "\nname : " << name << endl;
	//cout << "\naddress : " << address;

	//int a = 10, b = 5, c=0, d=0, e=0;
	//printf("a = %d b = %d\n" , a++ , b--);// 10 , 5
	//printf("a = %d b = %d\n", a++, b);// 11 , 4
	//printf("a = %d b = %d\n", ++a, b);// 13 , 4
	//c = a;
	//printf("c = %d\n" , c);
	//d = c % b;
	//printf ("d= %d\n",d);
	
	//int a, b, c, h, s;
	//a = b = h = 5;
	//c = ++a + b--;
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//cout << "c = " << c << endl;
	//s = ++h + ++h;
	//cout << "h = " << h << endl;
	//cout << "s = " << s << endl;

	//int h, s;
	//h = 3;
	//s = h > 2; //  s는h다. s>2 인가? true
	//cout << s << endl;
	//s = h < 2;false
	//cout << s << endl;
	//s = 2 == 3;false
	//cout << s << endl;

	//int h, s;
	//h = 2 != 4 && 5 > 3;
	//s = !1 || !0;
	//cout << h << endl;
	//cout << s << endl;

	//int a, b, c;
	//printf("두 값을 입력하세요 : ");
	//scanf_s("%d %d",&a,&b);
	//c = a > b;
	//printf("C 결과 : %d\n",c);
	//printf("a>b 결과 : %d\n",a>b);
	//a++;
	//printf("a와 b가 같다 : %d\n", a==b);
	//printf("a와 b가 같지않다 : %d\n", a != b);

	int a = 3, b = 2, c;
	c = a == ++b;
	printf("결과 : %d\n", (a==b)&&(--b==c)); // 3==2 &&1==3 
	printf("결과 : %d\n",(a!=b)||(b==c)); // 3!=1 || 1==3
	printf("결과 : %d\n",!(a!=b)||(b==c)); // 3!=1 || 1==3



}




