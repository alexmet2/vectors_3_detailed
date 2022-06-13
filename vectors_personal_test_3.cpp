#include <iostream>
#include <vector>

using namespace std;
void second() {
	vector <int> secondv;
	vector <int> secondvodd;
	vector <int> secondveven;
	vector <int> secondvneg;
	int size = 0, temp = 0;
	cout << "Input the size: " << endl;
	cin >> size;
	size_test:
	if (size == 0) {
		cout << "Input again the size: " << endl;
		cin >> size;
		if (size == 0) {
			goto size_test;
		}
	}
	if (size == 1) {
		cout << "Input the number: " << endl;
		for (int a = 0; a < size; a++) {
			cin >> temp;
			secondv.push_back(temp);
		}
	}
	else {
		cout << "Input the numbers: " << endl;
		for (int a = 0; a < size; a++) {
			cin >> temp;
			secondv.push_back(temp);
		}
	}
	vector <int>::iterator it;
	for (it = secondv.begin(); it < secondv.end(); it++) {
		if (*it < 0) {
			secondvneg.push_back(*it);
		}
		else if (*it % 2 == 0) {
			secondveven.push_back(*it);
		}
		else if (*it % 2 == 1) {
			secondvodd.push_back(*it);
		}
	}
	cout << endl << "Negative numbers: " << endl;
	for (it = secondvneg.begin(); it < secondvneg.end(); it++) {
		cout << *it << " ";
	}
	cout << endl << "Odd numbers: " << endl;
	for (it = secondvodd.begin(); it < secondvodd.end(); it++) {
		cout << *it << " ";
	}
	cout << endl << "Even numbers: " << endl;
	for (it = secondveven.begin(); it < secondveven.end(); it++) {
		cout << *it << " ";
	}
	cout << endl << "End of test" << endl;
}
int main()
{
	vector <int> v{ 1,2,3,4,5,6,7 };
	v.push_back(4);
	vector<int>::iterator i;
	for (i = v.begin(); i < v.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
	v.pop_back();
	for (i = v.begin(); i < v.end(); i++) {
		cout << *i << " ";
	}
	cout << endl << v.at(2);
	cout << endl;
	second();
	return 0;
}