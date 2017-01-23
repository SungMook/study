/*
* 문제 번호 : 1157
* 문제 이름 : 단어 공부
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>

using namespace std;

int main()
{
	string input;
	char arr[1000001] = { 0, };
	int num = 0, max = -1, temp = 0;
	char result = 0;
	bool flag = false;
	cin.getline(arr, 1000001);
	input = arr;

	if (input.length() == 0)
		cout << "0" << endl;
	else {
		transform(input.begin(), input.end(), input.begin(), ::toupper);
		sort(input.begin(), input.end());

		while (num < input.length()) {
			temp = count(input.begin(), input.end(), input[num]);

			if (input[num] >= 'A' && input[num] <= 'Z') {
				if (temp > max) {
					max = temp;
					flag = false;
					result = input[num];
				}
				else if (temp == max) {
					flag = true;
				}
			}
			num += temp;
		}
		if (flag)
			cout << "?" << endl;
		else
			cout << result << endl;
	}
	return 0;
}