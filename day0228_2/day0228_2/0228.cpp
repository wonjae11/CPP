#include <iostream>
using namespace std;

//int main() {
//	int myInput;
//	cin >> myInput;
//
//	switch (myInput) {
//		case 1:
//			cout << "1이네요" << endl;
//			break;
//		case 2:
//			cout << "2네요" << endl;
//			break;
//		default:
//			cout << "1도 2도 아니네요" << endl;
//	}
//}

//int main() {
//	int myInput;
//	cin >> myInput;
//
//	bool isBigger = myInput > 10;
//
//	// 조건 ? 참일때 : 거짓일때
//	cout << (isBigger ? "10보다 크네요" : "10보다 작네요") << endl;
//}

// 실습1. if문(1)
//int main() {
//    int age;
//    cout << "나이를 입력하세요: ";
//    cin >> age;
//
//    if (age >= 200) {
//        std::cout << "나이가 너무 많습니다..!" << endl;
//    }
//    else if (age >= 20) {
//        std::cout << "성인" << endl;
//    }
//    else if (age >= 17) {
//        std::cout << "고등학생" << endl;
//    }
//    else if (age >= 14) {
//        std::cout << "중학생" << endl;
//    }
//    else if (age >= 8) {
//        std::cout << "초등학생" << endl;
//    }
//    else if (age >= 1) {
//        std::cout << "유아" << endl;
//    }
//    else {
//        std::cout << "잘못된 나이 입력입니다!" << endl;
//    }
//
//    return 0;
//}

//// 실습2. if문(2)
//#include <string>
//int main() {
//	string name;
//	cout << "이름을 입력하세요: ";
//	cin >> name;
//
//	if (name == "홍길동") {
//		cout << "남자" << endl;
//	}
//	else if (name == "성춘향") {
//		cout << "여자" << endl;
//	}
//	else {
//		cout << "모르겠어요." << endl;
//	}
//	return 0;
//}

//// 실습3. 삼항연산자
//int main() {
//	int num;
//	cout << "숫자를 입력하세요: ";
//	cin >> num;
//	cout << num << (num % 5 == 0 ? "은(는) 5의 배수입니다." : "은(는) 5의 배수가 아닙니다.") << endl;
//	return 0;
//}

// 실습4. 정수의 연산
//int main() {
//    int num1, num2;
//    char op;
//
//    cout << "연산할 정수 두 개를 입력해주세요: ";
//    cin >> num1 >> num2;
//
//    cout << "연산자를 입력해주세요. (+ - * / %): ";
//    cin >> op;
//
//    if (op == '+')
//        cout << num1 + num2 << endl;
//    else if (op == '-')
//        cout << num1 - num2 << endl;
//    else if (op == '*')
//        cout << num1 * num2 << endl;
//    else if (op == '/') {
//        if (num2 == 0)
//            cout << "오류: 0으로 나눌 수 없습니다!" << endl;
//        else
//            cout << num1 / num2 << std::endl;
//    }
//    else if (op == '%') {
//        if (num2 == 0)
//            cout << "오류: 0으로 나눌 수 없습니다!" << endl;
//        else
//            cout << "몫은 " << num1 / num2 << " 나머지는 " << num1 % num2 << "입니다." << endl;
//    }
//    else
//        cout << "오류: 잘못된 연산자 입력!" << endl;
//
//    return 0;
//}

int main() {
    int num1, num2;
    char op;

    cout << "연산할 정수 두 개를 입력해주세요: ";
    cin >> num1 >> num2;

    cout << "연산자를 입력해주세요. (+ - * / %): ";
    cin >> op;

    switch (op) {
    case '+':
        cout << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0)
            cout << "오류: 0으로 나눌 수 없습니다!" << endl;
        else
            cout << num1 / num2 << endl;
        break;
    case '%':
        if (num2 == 0)
            cout << "오류: 0으로 나눌 수 없습니다!" << endl;
        else
            cout << "몫: " << num1 / num2 << " 나머지는 " << num1 % num2 << "입니다." << endl;
        break;
    default:
        cout << "오류: 잘못된 연산자 입력!" << endl;
    }

    return 0;
}

