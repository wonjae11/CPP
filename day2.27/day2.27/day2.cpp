#include <iostream>
#include <stdio.h>
using namespace std;

//int main() {
//	// 정수형
//	// char(1), short(2), int(4), long(4), long long(8)
//	// unsigned 양수만
//	// char : 256개의 수 표현 가능(-128~127)
//	// unsigned : 0~255
//	//char a = 100;
//	//unsigned char a = 100;
//	//cout << a;
//
//	//bool t = true;
//	//bool f = false;	
//
//	//cout << t << "\n"; //1
//	//cout << f << "\n"; //0
//
//	//string s = "Hello, World!";
//	//cout << s;
//
//	//string name;
//	//int age;
//	//cout << "이름을 입력하세요. : ";
//	//cin >> name;
//	//cout << "나이를 입력하세요. : ";
//	//cin >> age;
//	//cout << "안녕하세요!" << name<<"님" << "("<< age <<"세)";
//	//scanf_s("%d", &age);
//	//printf("%d", age);
//}

// 산술 연산자
int main() {
	int a = 10;
	a = a + 5;
	a += 5;

	// %: 나머지 계산 -> 실수의 계산은 에러
	//cout << 10. % 3.;	

	// 증감 연산자
	int b = 0;
	b++; //전치(위)
	++b; //후치(위)
	int c = b++; //c = 2, b = 3
	int d = ++b; //d = 3, b = 3
	cout << c;

	// 비교	연산자
	// ==, !=, >, <, >=, <=

	// 논리 연산자
	// &&(AND), ||(OR), !(NOT)

	// 비트 연산자

}