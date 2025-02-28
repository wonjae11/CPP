#include <iostream>
#include <bitset>
using namespace std;


int main() {
	//// 실습 1. 특정 비트 설정
	//int num = 0b00010010;
	//int mask = 0b00100000;
	//int result = num | mask;
	//cout << "실습1정답:" << bitset<8>(result) << endl;
	//return 0;

	//// 실습 2. 특정 비트 제거
	//int num2 = 0b10101111;
	//int mask2 = 0b10101011;
	//int result2 = num2 & mask2;
	//cout << "실습2정답:" << bitset<8>(result2) << endl;
	//return 0;

	//// 실습3. 특정 비트 반전
	//int num3 = 0b11011010;
	//int mask3 = 0b0001000;
	//int result3 = num3 ^ mask3;
	//cout << "실습3정답:" << bitset<8>(result3) << endl;
	//return 0;

	//// 실습4. 특정 비트 값 추출
	//int num4;
	//cout << "숫자 입력: ";
	//cin >> num4;
	//int bit_value = (num4 >> 4) & 1;
	//cout << "입력된 숫자: " << std::bitset<8>(num4) << endl;
	//cout << "실습4정답:" << bit_value << endl;
	//return 0;

	//// 실습5. 짝수/홀수 판별
	//int num5;
	//cout << "숫자 입력: ";
	//cin >> num5;
	//cout << "입력된 숫자: " << std::bitset<8>(num5) << endl;
	//if (num5 & 1) {
	//	cout << "홀수입니다." << endl;
	//}
	//else {
	//	cout << "짝수입니다." << endl;
	//}
	//return 0;

	// 실습6. 2의 거듭제곱 판별
	int num6;
	cout << "숫자 입력: ";
	cin >> num6;
	cout << "입력된 숫자: " << std::bitset<16>(num6) << endl;
	if (num6 & (num6 - 1)) {
		cout << "2의 거듭제곱이 아닙니다." << endl;
	}
	else {
		cout << "2의 거듭제곱입니다." << endl;
	}
	return 0;
}