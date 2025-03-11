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

	////실습1. vector 조작하기
	////1. vector를 사용하여 정수를 저장하는 빈 벡터 선언
	//vector<int> vec1;

	////2. 사용자로부터 5개의 정수를 입력받아 벡터에 추가
	//for (int i = 0; i < 5; i++) {
	//	int num;
	//	cin >> num;
	//	vec1.push_back(num);
	//}

	////3. 벡터의 크기 출력
	//cout << "벡터의 크기: " << vec1.size() << endl;

	////4. 벡터의 모든 원소 출력
	//for (int num : vec1) {
	//	cout << num << " ";
	//}
	//cout << endl;

	////5. 가장 큰 값을 찾아 출력	
	//int max = *max_element(vec1.begin(), vec1.end());
	//cout << "가장 큰 값: " << max << endl;

	////6. 벡터의 모든 원소를 두배로
	//for (int num : vec1) {
	//	cout << num * 2 << " ";
	//}
	//cout << endl;

	////7. 인덱스를 입력받아 해당 인덱스에 있는 원소 제거
	//int removeindx;
	//cin >> removeindx;
	//if (removeindx >= 0 && removeindx < vec1.size()) {
	//	vec1.erase(vec1.begin() + removeindx);
	//}
	//else {
	//	cout << "잘못된 인덱스입니다." << endl;
	//}
	//cout << "제거 후: ";
	//for (int num : vec1) {
	//	cout << num << " ";
	//}
	//cout << endl;

	////8. 인덱스를 입력받아 해당 인덱스에 있는 새로운 원소 삽입
	//int idx2, num2;
	//cout << "인덱스와 삽입할 숫자를 입력하세요: ";
	//cin >> idx2 >> num2;
	//if (idx2 >= 0 && idx2 <= vec1.size()) {
	//	vec1.insert(vec1.begin() + idx2, num2);
	//}
	//else {
	//	cout << "잘못된 인덱스입니다." << endl;
	//}
	//cout << "삽입 후: ";
	//for (int num : vec1) {
	//	cout << num << " ";
	//}
	//cout << endl;

	////실습2. 2차원 행렬 만들기
	////사용자가 입력한 행과 열 크기에 맞는 동적 2차원 배열을 생성하고, 각 요소를 (i+1)*(j+1) 값으로 초기화 하는 프로그램을 작성하시오
	//int row, col;
	//cout << "행과 열의 크기를 입력하세요: ";
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

	//cout << "2차원 배열 출력" << endl;
	//for (int i = 0; i < row; i++) {
	//	for (int j = 0; j < col; j++) {
	//		cout << matrix[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//return 0;

	//실습3. 2차원 행렬 만들기
	int row, col;
	cout << "행과 열의 크기를 입력하세요: ";
	cin >> row >> col;

	int** matrix = new int* [row];
	for (int i = 0; i < row; i++) {
		matrix[i] = new int[col];
	}

	cout << "행렬 원소를 입력하세요: " << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> matrix[i][j];
		}
	}

	cout << "\n각 행의 합: " << endl;
	for (int i = 0; i < row; i++) {
		int rowsum = 0;
		for (int j = 0; j < col; j++) {
			rowsum += matrix[i][j];
		}
		cout << "행" << i+1 << ": " << rowsum << endl;
	}

	cout << "\n각 열의 합: " << endl;
	for (int j = 0; j < col; j++) {
		int colsum = 0;
		for (int i = 0; i < row; i++) {
			colsum += matrix[i][j];
		}
		cout << "열" << j + 1 << ": " << colsum << endl;
	}

	for (int i = 0; i < row; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}