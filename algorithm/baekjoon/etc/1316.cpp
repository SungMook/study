/*
* ���� ��ȣ : 1316
* ���� �̸� : �׷� �ܾ� üĿ
*/

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	int testcase = 0, result = 0;
	bool arr[26];
	string input;
	cin >> testcase;
	result = testcase;

	for (int i = 0; i < testcase; i++) {
		int len = 0;
		memset(arr, false, sizeof(arr));

		cin >> input;
		len = input.length();

		for (int j = 0; j < len; j++) {
			if (j != 0) {
				if (arr[input[j] - 'a'] == true && input[j] != input[j - 1]) {
					result--;
					break;
				}
			}
			arr[input[j] - 'a'] = true;
		}
	}
	cout << result << endl;
	return 0;
}