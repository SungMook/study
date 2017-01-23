/*
* 문제 번호 : 2775
* 문제 이름 : 부녀회장이 될테야
*/

#include <iostream>

using namespace std;

int main()
{
	int testcase = 0, floor = 0, number = 0;
	int *arr = NULL, *result = NULL;
	cin >> testcase;

	result = new int[testcase];
	for (int i = 0; i < testcase; i++)
		result[i] = 0;

	for (int i = 0; i < testcase; i++) {
		cin >> floor >> number;
		arr = new int[number];
		for (int j = 0; j < number; j++)
			arr[j] = j + 1;

		for (int j = 0; j < floor; j++) {
			for (int k = 0; k < number; k++) {
				if (k == 0)
					arr[k] = 1;
				else {
					arr[k] = arr[k] + arr[k - 1];
				}
			}
		}
		result[i] = arr[number - 1];
		delete arr;
	}
	for (int i = 0; i < testcase; i++)
		cout << result[i] << endl;
	delete result;
	return 0;
}