#include <iostream>

using namespace std;

void main() {
	//¦��
	//int a;
	//cout << "���� �Է��Ͻÿ�. : " << endl;
	//cin >> a;

	//if (a % 2 == 0) {
	//	cout << "�Է��Ͻ� ����  ¦���Դϴ�." << endl;
	//}
	//else {
	//	cout << "�Է��Ͻ� ����  Ȧ���Դϴ�." << endl;
	//}


	////10�� ���
	//cout << "���� �Է��Ͻÿ�. : " << endl;
	//cin >> a;
	//if (a % 10 == 0) {
	//	cout << "�Է��Ͻ� ���� 10�ǹ�� �Դϴ�." << endl;

	//}else {
	//	cout << "�Է��Ͻ� ���� 10�ǹ���� �ƴմϴ�." << endl;
	//}

	//int a;
	//	cout << "���� �Է��Ͻÿ�. : " << endl;
	//cin >> a;
	//if (a > 10) 
	//	cout << a << "�� 10���� ū �� �Դϴ�."<< endl;

	//else 
	//	cout <<a<< "�� 10���� ���� �� �Դϴ�." << endl;
	
	//int num1, num2;

	//cout << "ù��° ���� �Է� �Ͻÿ� : ";
	//cin >> num1;
	//cout << "�ι�° ���� �Է� �Ͻÿ� : ";
	//cin >> num2;
	//cout << "�� ���� �� �м� ����� : ";
	//if (num1 >= num2) {
	//	if (num1 == num2) {
	//		cout << num1 << " ��(��) " << num2 << " ��(��) ������ �� �Դϴ�." << endl;
	//	}
	//	else {
	//		cout << num1 << " ��(��) " << num2 << "���� ū �� �Դϴ�." << endl;
	//	}
	//}
	//else {
	//	cout << num1 << " ��(��) " << num2 << "���� ���� �� �Դϴ�." << endl;
	//}
	
	// ���ڸ� �Է� �޾� 5�� ����� �Ǳ����� �� �ʿ��� �� ����ϱ�

	//int num1, num2,num3;
	//cout << "���ڸ� �Է� : ";
	//cin >> num1;
	//cout << "ó�� ���ں��� ���� ���ڸ� �Է� : ";
	//cin >> num3;
	//if (num1 % num3 != 0) {
	//	num2 = num3 - num1 % num3;
	//	cout << num1 << "�� "<<num3<<"�� ����� �Ǳ� ���ؼ� " <<num1/num3<<" ��ŭ ���� �� "<< num2 << " �� �ʿ�!" << endl;
	//}
	//else {
	//	cout << num1 << "�� "<<num3<<"�� ����Դϴ�. " << endl;
	//}

	//char ch;
	//cout << "���ڸ� �Է��ϼ��� : ";
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
	
	// ����ǥ �����
	int kor, eng, tot;
	double avg;
	cout << "���� ���� : ";
	cin >> kor;
	cout << "���� ���� : ";
	cin >> eng;
	tot = kor + eng;
	avg = tot / 2.0;
	if (avg >= 90) {
		cout << "A��� �Դϴ�.";
	}else if (avg >= 80) {
		cout << "B��� �Դϴ�.";
	}
	else if (avg >= 70) {
		cout << "C��� �Դϴ�.";
	}
	else if (avg >= 60) {
		cout << "D��� �Դϴ�.";
	}
	else if (avg >= 50) {
		cout << "F��� �Դϴ�.";
	}


}


