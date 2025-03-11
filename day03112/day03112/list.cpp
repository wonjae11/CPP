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

	//cout << "번거로워요" << endl;
	
	//list<int> list1 = { 1,2,2,2,2,3 };
	//list<int> list2 = { 4,5,6 };

	//list1.merge(list2); //합병
	//list1.unique(); //연속된 중복값 제거
	//list1.splice(++list1.begin, list2);

	//실습1. list 사용해보기
	//1.
	list<int> myList = { 5,4,3,4,2,1,1 };

	//2.4가 몇 개인지 출력
	cout << "4의 개수: " << count(myList.begin(), myList.end(), 4) << endl;

	//3. {1,1,2,3,4,4,5}가 나오도록 리스트 변경
	myList.sort();
	cout << "정렬 후: ";
	for (int num : myList) cout << num << " ";
	cout << endl;

	//4. {1,2,3,4,5}가 나오도록 리스트 변경
	myList.unique();
	cout << "중복 제거 후: ";
	for (int num : myList) cout << num << " ";
	cout << endl;

	//5. {1,2,3,4,5,6,7}이 나오도록 리스트 변경
	myList.push_back(6);
	myList.push_back(7);
	cout << "마지막에 6, 7 추가 후: ";
	for (int num : myList) cout << num << " ";
	cout << endl;

	//6. {0,1,2,3,4,5,6,7}이 나오도록 리스트 변경
	myList.push_front(0);
	cout << "처음에 0 추가 후: ";
	for (int num : myList) cout << num << " ";
	cout << endl;
}