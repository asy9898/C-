#include <iostream>

using namespace std;

void main() {
	//짝수
	//int a;
	//cout << "수를 입력하시오. : " << endl;
	//cin >> a;

	//if (a % 2 == 0) {
	//	cout << "입력하신 수는  짝수입니다." << endl;
	//}
	//else {
	//	cout << "입력하신 수는  홀수입니다." << endl;
	//}


	////10의 배수
	//cout << "수를 입력하시오. : " << endl;
	//cin >> a;
	//if (a % 10 == 0) {
	//	cout << "입력하신 수는 10의배수 입니다." << endl;

	//}else {
	//	cout << "입력하신 수는 10의배수가 아닙니다." << endl;
	//}

	//int a;
	//	cout << "수를 입력하시오. : " << endl;
	//cin >> a;
	//if (a > 10) 
	//	cout << a << "은 10보다 큰 수 입니다."<< endl;

	//else 
	//	cout <<a<< "은 10보다 작은 수 입니다." << endl;
	
	//int num1, num2;

	//cout << "첫번째 수를 입력 하시오 : ";
	//cin >> num1;
	//cout << "두번째 수를 입력 하시오 : ";
	//cin >> num2;
	//cout << "두 수의 비교 분석 결과는 : ";
	//if (num1 >= num2) {
	//	if (num1 == num2) {
	//		cout << num1 << " 와(과) " << num2 << " 은(는) 동일한 수 입니다." << endl;
	//	}
	//	else {
	//		cout << num1 << " 은(는) " << num2 << "보다 큰 수 입니다." << endl;
	//	}
	//}
	//else {
	//	cout << num1 << " 은(는) " << num2 << "보다 작은 수 입니다." << endl;
	//}
	
	// 숫자를 입력 받아 5의 배수가 되기위해 더 필요한 수 출력하기

	//int num1, num2,num3;
	//cout << "숫자를 입력 : ";
	//cin >> num1;
	//cout << "처음 숫자보다 작은 숫자를 입력 : ";
	//cin >> num3;
	//if (num1 % num3 != 0) {
	//	num2 = num3 - num1 % num3;
	//	cout << num1 << "은 "<<num3<<"의 배수가 되기 위해서 " <<num1/num3<<" 만큼 곱한 뒤 "<< num2 << " 더 필요!" << endl;
	//}
	//else {
	//	cout << num1 << "은 "<<num3<<"의 배수입니다. " << endl;
	//}

	//char ch;
	//cout << "문자를 입력하세요 : ";
	//cin >> ch;
	//if (ch >= 'A' && ch <= 'Z') {
	//	cout << "Upper case" << endl;
	//}
	//else if (ch >= 'a' && ch <= 'z') {
	//	cout << "Lower case" << endl;
	//}
	//else {
	//	cout << "No Good" << endl;
	//}
	
	// 성적표 만들기
	int kor, eng, tot;
	double avg;
	cout << "국어 점수 : ";
	cin >> kor;
	cout << "영어 점수 : ";
	cin >> eng;
	tot = kor + eng;
	avg = tot / 2.0;
	if (avg >= 90) {
		cout << "A등급 입니다.";
	}else if (avg >= 80) {
		cout << "B등급 입니다.";
	}
	else if (avg >= 70) {
		cout << "C등급 입니다.";
	}
	else if (avg >= 60) {
		cout << "D등급 입니다.";
	}
	else if (avg >= 50) {
		cout << "F등급 입니다.";
	}


}


