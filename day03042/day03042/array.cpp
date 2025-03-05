#include <iostream>
#include <bitset>
using namespace std;

int main() {
	//int numbers[5] = {10,20,30,40,50};
	//// 인덱싱 : 배열이름	[인덱스번호]
	//for (int i = 0; i < 5; i++) {
	//	cout << numbers[i] << endl;
	//}

	//int numbers[] = { 10, 20, 30 };

	//string words[2][2] = { {"가","나"},{"다","라"} };
	//cout << words[0][1];

	//int numbers[4] = { 10,20,30,40 };
	//for (int num : numbers) {
	//	cout << num << endl;
	//}

	//string city2[5];
	//for (int i = 0; i < 5; i++) {
	//	cout << "나라 이름을 입력하세요 : ";
	//	cin >> city2[i];
	//}
	//cout << "\n입력한 나라 목록:" << endl;
	//for (int i = 0; i < 5; i++) {
	//	cout << city2[i] << endl;
	//}

	//실습3. 5명의 학생의 점수를 입력받아서 5인 성적 평균 산출.
	int scores[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "번째 학생의 성적을 입력하세요 : ";
		cin >> scores[i];
		sum += scores[i];
	}
	cout << "성적 평균: " << sum / 5 << endl;
}