#include <iostream>
using namespace std;

//int main() {
//	int myInput;
//	cin >> myInput;
//
//	switch (myInput) {
//		case 1:
//			cout << "1�̳׿�" << endl;
//			break;
//		case 2:
//			cout << "2�׿�" << endl;
//			break;
//		default:
//			cout << "1�� 2�� �ƴϳ׿�" << endl;
//	}
//}

//int main() {
//	int myInput;
//	cin >> myInput;
//
//	bool isBigger = myInput > 10;
//
//	// ���� ? ���϶� : �����϶�
//	cout << (isBigger ? "10���� ũ�׿�" : "10���� �۳׿�") << endl;
//}

// �ǽ�1. if��(1)
//int main() {
//    int age;
//    cout << "���̸� �Է��ϼ���: ";
//    cin >> age;
//
//    if (age >= 200) {
//        std::cout << "���̰� �ʹ� �����ϴ�..!" << endl;
//    }
//    else if (age >= 20) {
//        std::cout << "����" << endl;
//    }
//    else if (age >= 17) {
//        std::cout << "����л�" << endl;
//    }
//    else if (age >= 14) {
//        std::cout << "���л�" << endl;
//    }
//    else if (age >= 8) {
//        std::cout << "�ʵ��л�" << endl;
//    }
//    else if (age >= 1) {
//        std::cout << "����" << endl;
//    }
//    else {
//        std::cout << "�߸��� ���� �Է��Դϴ�!" << endl;
//    }
//
//    return 0;
//}

//// �ǽ�2. if��(2)
//#include <string>
//int main() {
//	string name;
//	cout << "�̸��� �Է��ϼ���: ";
//	cin >> name;
//
//	if (name == "ȫ�浿") {
//		cout << "����" << endl;
//	}
//	else if (name == "������") {
//		cout << "����" << endl;
//	}
//	else {
//		cout << "�𸣰ھ��." << endl;
//	}
//	return 0;
//}

//// �ǽ�3. ���׿�����
//int main() {
//	int num;
//	cout << "���ڸ� �Է��ϼ���: ";
//	cin >> num;
//	cout << num << (num % 5 == 0 ? "��(��) 5�� ����Դϴ�." : "��(��) 5�� ����� �ƴմϴ�.") << endl;
//	return 0;
//}

// �ǽ�4. ������ ����
//int main() {
//    int num1, num2;
//    char op;
//
//    cout << "������ ���� �� ���� �Է����ּ���: ";
//    cin >> num1 >> num2;
//
//    cout << "�����ڸ� �Է����ּ���. (+ - * / %): ";
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
//            cout << "����: 0���� ���� �� �����ϴ�!" << endl;
//        else
//            cout << num1 / num2 << std::endl;
//    }
//    else if (op == '%') {
//        if (num2 == 0)
//            cout << "����: 0���� ���� �� �����ϴ�!" << endl;
//        else
//            cout << "���� " << num1 / num2 << " �������� " << num1 % num2 << "�Դϴ�." << endl;
//    }
//    else
//        cout << "����: �߸��� ������ �Է�!" << endl;
//
//    return 0;
//}

int main() {
    int num1, num2;
    char op;

    cout << "������ ���� �� ���� �Է����ּ���: ";
    cin >> num1 >> num2;

    cout << "�����ڸ� �Է����ּ���. (+ - * / %): ";
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
            cout << "����: 0���� ���� �� �����ϴ�!" << endl;
        else
            cout << num1 / num2 << endl;
        break;
    case '%':
        if (num2 == 0)
            cout << "����: 0���� ���� �� �����ϴ�!" << endl;
        else
            cout << "��: " << num1 / num2 << " �������� " << num1 % num2 << "�Դϴ�." << endl;
        break;
    default:
        cout << "����: �߸��� ������ �Է�!" << endl;
    }

    return 0;
}

