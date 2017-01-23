/*
* 문제 번호 : 2908
* 문제 이름 : 상수
*/
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	int input1 = 0, input2 = 0;
	int result1 = 0, result2 = 0, temp = 100;
	cin >> input1 >> input2;

	for (int i = 0; i < 3; i++) {
		result1 += ((input1 % 10) * temp);
		result2 += ((input2 % 10) * temp);

		input1 /= 10;
		input2 /= 10;
		temp /= 10;
	}
	if (result1 > result2)
		cout << result1 << endl;
	else
		cout << result2 << endl;
	return 0;
}