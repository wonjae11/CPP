#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	//vector<int> vec = { 1,2,3,4,5,6 };
	////for (int i = 0; i < vec.end() - vec.begin(); i++) {
	////	cout << vec[i] << " ";
	////}
	////vector<int> vec2(5, 10);

	////cout << vec.at(3);

	//vec.push_back(7);
	//vec.pop_back();
	//vec.insert(vec.begin() + 3, 10);
	//vec.erase(vec.begin() + 3);
	//cout << vec[1];

	//vector<int> vec = { 3,5,1,6,4,2,7,8,9 };

	//sort(vec.begin(), vec.end());

	//cout << vec[1];

	////�ǽ�1. vector �����ϱ�
	////1. vector�� ����Ͽ� ������ �����ϴ� �� ���� ����
	//vector<int> vec1;

	////2. ����ڷκ��� 5���� ������ �Է¹޾� ���Ϳ� �߰�
	//for (int i = 0; i < 5; i++) {
	//	int num;
	//	cin >> num;
	//	vec1.push_back(num);
	//}

	////3. ������ ũ�� ���
	//cout << "������ ũ��: " << vec1.size() << endl;

	////4. ������ ��� ���� ���
	//for (int num : vec1) {
	//	cout << num << " ";
	//}
	//cout << endl;

	////5. ���� ū ���� ã�� ���	
	//int max = *max_element(vec1.begin(), vec1.end());
	//cout << "���� ū ��: " << max << endl;

	////6. ������ ��� ���Ҹ� �ι��
	//for (int num : vec1) {
	//	cout << num * 2 << " ";
	//}
	//cout << endl;

	////7. �ε����� �Է¹޾� �ش� �ε����� �ִ� ���� ����
	//int removeindx;
	//cin >> removeindx;
	//if (removeindx >= 0 && removeindx < vec1.size()) {
	//	vec1.erase(vec1.begin() + removeindx);
	//}
	//else {
	//	cout << "�߸��� �ε����Դϴ�." << endl;
	//}
	//cout << "���� ��: ";
	//for (int num : vec1) {
	//	cout << num << " ";
	//}
	//cout << endl;

	////8. �ε����� �Է¹޾� �ش� �ε����� �ִ� ���ο� ���� ����
	//int idx2, num2;
	//cout << "�ε����� ������ ���ڸ� �Է��ϼ���: ";
	//cin >> idx2 >> num2;
	//if (idx2 >= 0 && idx2 <= vec1.size()) {
	//	vec1.insert(vec1.begin() + idx2, num2);
	//}
	//else {
	//	cout << "�߸��� �ε����Դϴ�." << endl;
	//}
	//cout << "���� ��: ";
	//for (int num : vec1) {
	//	cout << num << " ";
	//}
	//cout << endl;

	////�ǽ�2. 2���� ��� �����
	////����ڰ� �Է��� ��� �� ũ�⿡ �´� ���� 2���� �迭�� �����ϰ�, �� ��Ҹ� (i+1)*(j+1) ������ �ʱ�ȭ �ϴ� ���α׷��� �ۼ��Ͻÿ�
	//int row, col;
	//cout << "��� ���� ũ�⸦ �Է��ϼ���: ";
	//cin >> row >> col;

	//int** matrix = new int* [row];
	//for (int i = 0; i < row; i++) {
	//	matrix[i] = new int[col];
	//}

	//for (int i = 0; i < row; i++) {
	//	for (int j = 0; j < col; j++) {
	//		matrix[i][j] = (i + 1) * (j + 1);
	//	}
	//}

	//cout << "2���� �迭 ���" << endl;
	//for (int i = 0; i < row; i++) {
	//	for (int j = 0; j < col; j++) {
	//		cout << matrix[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//return 0;

	//�ǽ�3. 2���� ��� �����
	int row, col;
	cout << "��� ���� ũ�⸦ �Է��ϼ���: ";
	cin >> row >> col;

	int** matrix = new int* [row];
	for (int i = 0; i < row; i++) {
		matrix[i] = new int[col];
	}

	cout << "��� ���Ҹ� �Է��ϼ���: " << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> matrix[i][j];
		}
	}

	cout << "\n�� ���� ��: " << endl;
	for (int i = 0; i < row; i++) {
		int rowsum = 0;
		for (int j = 0; j < col; j++) {
			rowsum += matrix[i][j];
		}
		cout << "��" << i+1 << ": " << rowsum << endl;
	}

	cout << "\n�� ���� ��: " << endl;
	for (int j = 0; j < col; j++) {
		int colsum = 0;
		for (int i = 0; i < row; i++) {
			colsum += matrix[i][j];
		}
		cout << "��" << j + 1 << ": " << colsum << endl;
	}

	for (int i = 0; i < row; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}