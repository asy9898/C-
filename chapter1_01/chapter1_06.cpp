#include <iostream>

using namespace std;

void main() {

	//int kor, eng, tot, mok;
	//double avg;
	//cout << "���� ���� : ";
	//cin >> kor;
	//cout << "���� ���� : ";
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
	//cout << "��� �Դϴ�." << endl;
	
	// ���� �ΰ��� �Է¹޾� ����ϱ�
	int a, b;
	char op;
	cout << "�� ���� �Է��Ͻÿ�. : ";
	cin >> a >> b;
	cout << "�����ڸ� �Է� �Ͻÿ� (+,-,*,/)" << endl;
	cin >> op;
	cout << "�� ���� ��� ����� ";
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
		cout << "+,-,*,/ �� �Է� �����մϴ�.";
		break;
	}
	cout << " �Դϴ�." << endl;

}