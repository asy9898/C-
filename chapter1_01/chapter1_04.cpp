#include <iostream>

using namespace std;

void main() {
	//int a, b;
	//cout << "ù��° ���ڸ� �Է��Ͻÿ�. : ";
	//cin >> a;
	//cout << "�ι�° ���ڸ� �Է��Ͻÿ�. : ";
	//cin >> b;
	//cout << "a = " << a << endl << "b = " << b << endl;
	//cout << "Large Number = ";
	//a > b ? cout << a << "��(��) �� ũ��" << endl 
	//	  : cout << b << "��(��) �� ũ��" << endl;

	//int i, j, k, MAX, MIN;
	//cout << "���� 3���� �Է��Ͻÿ�. : ";
	//cin >> i>> j>> k;
	//MAX = i > j ? (i > k ? i : k) : j > k ? j : k;
	//MIN = i < j ? (i < k ? i : k) : j < k ? j : k;
	//cout << "MAX = " << MAX << endl;
	//cout << "MIN = " << MIN << endl;

	int n, n1, n2, n3, n4, n5=0 , n6=0;
	cout << "�ټ��ڸ� ���� �Է� �ϼ��� : ";
	cin >> n;
	cout << n << "��" << endl;
	//59461
	// ��õ��¥�� �߰�
	n6 = n / 1000 % 10 >= 5 ? 1:0;
	n5 = n / 100 % 10 >= 5 ? 1 : 0;
	n1 = n / 10000;
	n2 = n / 1000 % 10 - n6 * 5;
	n3 = n / 100 % 10 - n5 * 5;
	n4 = n / 10%10;
	cout << "����¥�� : " << n1 << "��\n";
	cout << "��õ��¥�� : " << n6 << "��\n";
	cout << "õ��¥�� : " << n2 << "��\n";
	cout << "�����¥�� : " << n5 << "��\n";
	cout << "���¥�� : " << n3 << "��\n";
	cout << "�ʿ�¥�� : " << n4 << "��\n";
	//if (a > b) {
	//	cout << a;
	//}
	//else {
	//	cout << b;
	//}
}







