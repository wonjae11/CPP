#include <iostream>
using namespace std;

//�ǽ�1. ��Ģ���� �Լ� �����
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
//		cout << "0���� ���� �� �����ϴ�." << endl;
//		return 0;
//	}
//	return static_cast<double>(x) / y;
//}
//
//int main() {
//	int num1, num2;
//	cout << "�� ���� �Է��ϼ���: ";
//	cin >> num1 >> num2;
//
//	cout << "����: " << add(num1, num2) << endl;
//	cout << "����: " << sub(num1, num2) << endl;
//	cout << "����: " << mul(num1, num2) << endl;
//	cout << "������: " << divide(num1, num2) << endl;
//}

//// �ǽ�2. Ȧ¦ �Ǻ���
//void oddEvenDetector(int num) {
//	if (num % 2 == 0) {
//		cout << "¦���Դϴ�." << endl;
//	}
//	else {
//		cout << "Ȧ���Դϴ�." << endl;
//	}
//}
//
//int main() {
//	int num;
//	cout << "������ �Է��ϼ���: ";
//	cin >> num;
//	if (isEven(num)) {
//		cout << "¦���Դϴ�." << endl;
//	}
//	else {
//		cout << "Ȧ���Դϴ�." << endl;
//	}
//}

// �ǽ�3. �ִ밪 ã��
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
//	cout << "�� ���� �Է��ϼ���: ";
//	cin >> num1 >> num2 >> num3;
//	cout << "���� ū ���� " << max(num1, num2, num3) << "�Դϴ�." << endl;
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
//	cout << "����Լ� ȣ��" << endl;
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
//	cout << "���丮��: " << result << endl;
//}

//�ǽ�6. �ŵ� ����
int power(int a, int b) {
	if (b == 0) return 1;
	return a * power(a, b - 1);
}

int main() {
	int a, b;
	cout << "a�� b�� �Է��ϼ���" << endl;
	cin >> a >> b;
	cout << a << "^" << b << "=" << power(a, b) << endl;
	return 0;
}