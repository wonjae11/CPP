//��Ʈ ������
#include <iostream>
#include <bitset>
using namespace std;

int main() {
	// & (and) 
	int a = 0b0101;	//5
	int b = 0b1001;	//9
	//cout << bitset<4>(a & b) << endl;
	//cout << (a & b) << endl;

	// ^ (xor)
	//int c = 0b1010;
	//int d = 0b1001;
	//cout << bitset<4>(c ^ d) << endl;
	//cout << (c ^ d) << endl;

	// ����Ʈ
	//int e = 0b0001;
	//cout << bitset<4>(e >> 1);

	// Ư�� ��Ʈ�� �߰��� ����
	int f = 0b1000;
	// �߰�
	cout << bitset<4>(f | 1 << 1) << endl;
	cout << f << endl;
	// ����
	cout << bitset<4>(f & ~(1 << 3)) << endl;
}