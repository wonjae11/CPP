#include <iostream>
#include <bitset>
using namespace std;


int main() {
	//// �ǽ� 1. Ư�� ��Ʈ ����
	//int num = 0b00010010;
	//int mask = 0b00100000;
	//int result = num | mask;
	//cout << "�ǽ�1����:" << bitset<8>(result) << endl;
	//return 0;

	//// �ǽ� 2. Ư�� ��Ʈ ����
	//int num2 = 0b10101111;
	//int mask2 = 0b10101011;
	//int result2 = num2 & mask2;
	//cout << "�ǽ�2����:" << bitset<8>(result2) << endl;
	//return 0;

	//// �ǽ�3. Ư�� ��Ʈ ����
	//int num3 = 0b11011010;
	//int mask3 = 0b0001000;
	//int result3 = num3 ^ mask3;
	//cout << "�ǽ�3����:" << bitset<8>(result3) << endl;
	//return 0;

	//// �ǽ�4. Ư�� ��Ʈ �� ����
	//int num4;
	//cout << "���� �Է�: ";
	//cin >> num4;
	//int bit_value = (num4 >> 4) & 1;
	//cout << "�Էµ� ����: " << std::bitset<8>(num4) << endl;
	//cout << "�ǽ�4����:" << bit_value << endl;
	//return 0;

	//// �ǽ�5. ¦��/Ȧ�� �Ǻ�
	//int num5;
	//cout << "���� �Է�: ";
	//cin >> num5;
	//cout << "�Էµ� ����: " << std::bitset<8>(num5) << endl;
	//if (num5 & 1) {
	//	cout << "Ȧ���Դϴ�." << endl;
	//}
	//else {
	//	cout << "¦���Դϴ�." << endl;
	//}
	//return 0;

	// �ǽ�6. 2�� �ŵ����� �Ǻ�
	int num6;
	cout << "���� �Է�: ";
	cin >> num6;
	cout << "�Էµ� ����: " << std::bitset<16>(num6) << endl;
	if (num6 & (num6 - 1)) {
		cout << "2�� �ŵ������� �ƴմϴ�." << endl;
	}
	else {
		cout << "2�� �ŵ������Դϴ�." << endl;
	}
	return 0;
}