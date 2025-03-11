#include <iostream>
#include <list>
using namespace std;

int main() {
	//list<int> myList = { 1, 2, 3, 4, 5 };

	//for (auto it = myList.begin(); it != myList.end(); ++it) {
	//	cout << *it << endl;
	//}

	//myList.push_back(6);
	//myList.push_front(0);

	//myList.pop_back();
	//myList.pop_front();

	//auto it = myList.begin();
	//advance(it, 2);
	//myList.insert(it, 10);
	//advance(it, 1);
	//myList.erase(it);
	//myList.remove_if([](int n) {return n % 2 == 0;});

	//cout << "���ŷο���" << endl;
	
	//list<int> list1 = { 1,2,2,2,2,3 };
	//list<int> list2 = { 4,5,6 };

	//list1.merge(list2); //�պ�
	//list1.unique(); //���ӵ� �ߺ��� ����
	//list1.splice(++list1.begin, list2);

	//�ǽ�1. list ����غ���
	//1.
	list<int> myList = { 5,4,3,4,2,1,1 };

	//2.4�� �� ������ ���
	cout << "4�� ����: " << count(myList.begin(), myList.end(), 4) << endl;

	//3. {1,1,2,3,4,4,5}�� �������� ����Ʈ ����
	myList.sort();
	cout << "���� ��: ";
	for (int num : myList) cout << num << " ";
	cout << endl;

	//4. {1,2,3,4,5}�� �������� ����Ʈ ����
	myList.unique();
	cout << "�ߺ� ���� ��: ";
	for (int num : myList) cout << num << " ";
	cout << endl;

	//5. {1,2,3,4,5,6,7}�� �������� ����Ʈ ����
	myList.push_back(6);
	myList.push_back(7);
	cout << "�������� 6, 7 �߰� ��: ";
	for (int num : myList) cout << num << " ";
	cout << endl;

	//6. {0,1,2,3,4,5,6,7}�� �������� ����Ʈ ����
	myList.push_front(0);
	cout << "ó���� 0 �߰� ��: ";
	for (int num : myList) cout << num << " ";
	cout << endl;
}