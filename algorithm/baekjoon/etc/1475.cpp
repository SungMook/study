/*
* 문제 번호 : 1475
* 문제 이름 : 방 번호
*/
#include <iostream>

using namespace std;

int main()
{
	int arr[9] = { 0, }, input = 0, max = 0, index = 0;
	cin >> input;

	while (input > 0) {
		if (input % 10 == 9)
			arr[6]++;
		else
			arr[input % 10]++;
		input /= 10;
	}
	for (int i = 0; i < 9; i++) {
		int temp = 0;
		if (i == 6) {
			if (arr[i] % 2 == 0)
				temp = arr[i] / 2;
			else
				temp = (arr[i] / 2) + 1;
		}
		else
			temp = arr[i];

		if (temp > max) {
			max = temp;
			index = i;
		}
	}
	cout << max << endl;
	return 0;
}