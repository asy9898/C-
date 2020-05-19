#include <iostream>

using namespace std;

void main() {

	//int kor, eng, tot, mok;
	//double avg;
	//cout << "국어 점수 : ";
	//cin >> kor;
	//cout << "영어 점수 : ";
	//cin >> eng;
	//tot = kor + eng;
	//avg = tot / 2.0;
	//mok = avg / 10;

	//switch (mok) {
	//case 10:
	//	cout << "A+";
	//	break;
	//case 9:
	//	cout << "A";
	//	break;
	//case 8:
	//	cout << "B";
	//	break;
	//case 7:
	//	cout << "C";
	//	break;
	//case 6:
	//	cout << "D";
	//	break;
	//default: 
	//	cout << "F";
	//	break;
	//}
	//cout << "등급 입니다." << endl;
	
	// 숫자 두개를 입력받아 계산하기
	int a, b;
	char op;
	cout << "두 수를 입력하시오. : ";
	cin >> a >> b;
	cout << "연산자를 입력 하시오 (+,-,*,/)" << endl;
	cin >> op;
	cout << "두 수의 계산 결과는 ";
	switch (op) {
	case '+':
		cout << a + b;
		break;
	case '-':
		cout << a - b;
		break;
	case '*':
		cout << a * b;
		break;
	case '/':
		cout << a / b;
		break;

	default : 
		cout << "+,-,*,/ 만 입력 가능합니다.";
		break;
	}
	cout << " 입니다." << endl;

}