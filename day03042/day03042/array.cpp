#include <iostream>
#include <bitset>
using namespace std;

int main() {
	//int numbers[5] = {10,20,30,40,50};
	//// �ε��� : �迭�̸�	[�ε�����ȣ]
	//for (int i = 0; i < 5; i++) {
	//	cout << numbers[i] << endl;
	//}

	//int numbers[] = { 10, 20, 30 };

	//string words[2][2] = { {"��","��"},{"��","��"} };
	//cout << words[0][1];

	//int numbers[4] = { 10,20,30,40 };
	//for (int num : numbers) {
	//	cout << num << endl;
	//}

	//string city2[5];
	//for (int i = 0; i < 5; i++) {
	//	cout << "���� �̸��� �Է��ϼ��� : ";
	//	cin >> city2[i];
	//}
	//cout << "\n�Է��� ���� ���:" << endl;
	//for (int i = 0; i < 5; i++) {
	//	cout << city2[i] << endl;
	//}

	//�ǽ�3. 5���� �л��� ������ �Է¹޾Ƽ� 5�� ���� ��� ����.
	int scores[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "��° �л��� ������ �Է��ϼ��� : ";
		cin >> scores[i];
		sum += scores[i];
	}
	cout << "���� ���: " << sum / 5 << endl;
}