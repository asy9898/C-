#include <iostream>

using namespace std;

void main() {
	//int a, b;
	//cout << "첫번째 숫자를 입력하시오. : ";
	//cin >> a;
	//cout << "두번째 숫자를 입력하시오. : ";
	//cin >> b;
	//cout << "a = " << a << endl << "b = " << b << endl;
	//cout << "Large Number = ";
	//a > b ? cout << a << "이(가) 더 크다" << endl 
	//	  : cout << b << "이(가) 더 크다" << endl;

	//int i, j, k, MAX, MIN;
	//cout << "숫자 3개를 입력하시오. : ";
	//cin >> i>> j>> k;
	//MAX = i > j ? (i > k ? i : k) : j > k ? j : k;
	//MIN = i < j ? (i < k ? i : k) : j < k ? j : k;
	//cout << "MAX = " << MAX << endl;
	//cout << "MIN = " << MIN << endl;

	int n, n1, n2, n3, n4, n5=0 , n6=0;
	cout << "다섯자리 수를 입력 하세요 : ";
	cin >> n;
	cout << n << "원" << endl;
	//59461
	// 오천원짜리 추가
	n6 = n / 1000 % 10 >= 5 ? 1:0;
	n5 = n / 100 % 10 >= 5 ? 1 : 0;
	n1 = n / 10000;
	n2 = n / 1000 % 10 - n6 * 5;
	n3 = n / 100 % 10 - n5 * 5;
	n4 = n / 10%10;
	cout << "만원짜리 : " << n1 << "개\n";
	cout << "오천원짜리 : " << n6 << "개\n";
	cout << "천원짜리 : " << n2 << "개\n";
	cout << "오백원짜리 : " << n5 << "개\n";
	cout << "백원짜리 : " << n3 << "개\n";
	cout << "십원짜리 : " << n4 << "개\n";
	//if (a > b) {
	//	cout << a;
	//}
	//else {
	//	cout << b;
	//}
}







