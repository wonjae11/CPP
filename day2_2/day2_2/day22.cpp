//비트 연산자
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

	// 시프트
	//int e = 0b0001;
	//cout << bitset<4>(e >> 1);

	// 특정 비트의 추가와 제거
	int f = 0b1000;
	// 추가
	cout << bitset<4>(f | 1 << 1) << endl;
	cout << f << endl;
	// 제거
	cout << bitset<4>(f & ~(1 << 3)) << endl;
}