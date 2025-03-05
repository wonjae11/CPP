#include <iostream>
using namespace std;

//실습1. 사칙연산 함수 만들기
//int add(int x, int y) {
//	return x + y;
//}
//
//int sub(int x, int y) {
//	return (x > y) ? (x - y) : (y -x);
//}
//
//int mul(int x, int y) {
//	return x * y;
//}
//
//int divide(int x, int y) {
//	if (y == 0) {
//		cout << "0으로 나눌 수 없습니다." << endl;
//		return 0;
//	}
//	return static_cast<double>(x) / y;
//}
//
//int main() {
//	int num1, num2;
//	cout << "두 수를 입력하세요: ";
//	cin >> num1 >> num2;
//
//	cout << "덧셈: " << add(num1, num2) << endl;
//	cout << "뺄셈: " << sub(num1, num2) << endl;
//	cout << "곱셈: " << mul(num1, num2) << endl;
//	cout << "나눗셈: " << divide(num1, num2) << endl;
//}

//// 실습2. 홀짝 판별기
//void oddEvenDetector(int num) {
//	if (num % 2 == 0) {
//		cout << "짝수입니다." << endl;
//	}
//	else {
//		cout << "홀수입니다." << endl;
//	}
//}
//
//int main() {
//	int num;
//	cout << "정수를 입력하세요: ";
//	cin >> num;
//	if (isEven(num)) {
//		cout << "짝수입니다." << endl;
//	}
//	else {
//		cout << "홀수입니다." << endl;
//	}
//}

// 실습3. 최대값 찾기
//int max(int x, int y, int z) {
//	if (x > b && x > c) {
//		return x;
//	}
//	else if (y > x && y > z) {
//		return y;
//	}
//	else {
//		return z;
//	}
//}
//
//int main() {
//	int num1, num2, num3;
//	cout << "세 수를 입력하세요: ";
//	cin >> num1 >> num2 >> num3;
//	cout << "가장 큰 수는 " << max(num1, num2, num3) << "입니다." << endl;
//}

//void funcA(int x) {
//	int localA = x + 1;
//	cout << "Function A" << localA << endl;
//}
//
//void funcB(int x) {
//	int localB = x * 2;
//	cout << "Function B" << localB << endl;
//}
//
//int main() {
//	int num = 5;
//	funcB(num);
//	cout << num << endl;
//}

//void RecursiveFunc(int n) {
//	if (n == 0) return;
//	cout << "재귀함수 호출" << endl;
//	RecursiveFunc(n-1);
//}
//
//int main() {
//	RecursiveFunc(3);
//}

//int factorial(int n) {
//	int result = 1;
//	for (int i = 1; i <= n; i++) {
//		result *= i;
//	}
//	return result;
//}
//
//int factorialRe(int n) {
//	if (n == 1) return 1;
//	int facValue = factorialRe(n - 1);
//	return n * facValue;
//}
//
//int main() {
//	int result = factorialRe(5);
//	cout << "팩토리얼: " << result << endl;
//}

//실습6. 거듭 제곱
int power(int a, int b) {
	if (b == 0) return 1;
	return a * power(a, b - 1);
}

int main() {
	int a, b;
	cout << "a와 b를 입력하세요" << endl;
	cin >> a >> b;
	cout << a << "^" << b << "=" << power(a, b) << endl;
	return 0;
}