/*
* ���� ��ȣ : 2675
* ���� �̸� : ���ڿ� �ݺ�
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int testcase = 0, num = 0, len = 0;
	string input;
	cin >> testcase;

	for (int i = 0; i < testcase; i++) {
		cin >> num >> input;
		len = input.length();

		for (int j = 0; j < len; j++) {
			for (int k = 0; k < num; k++)
				cout << input[j];
		}
		cout << endl;
	}
	return 0;
}