/*
* ���� ��ȣ : 2292
* ���� �̸� : ����
*/
#include <iostream>

using namespace std;

int main()
{
	int input = 0, num = 0, temp = 0, count = 1;
	cin >> input;
	while (1) {
		temp = (6 * num) + 1;
		if (input <= temp)
			break;
		num += count;
		count++;
	}
	cout << count << endl;
	return 0;
}