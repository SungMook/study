/*
* 문제 번호 : 10250
* 문제 이름 : ACM 호텔
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int testcase = 0, H = 0, W = 0, N = 0;
	string *arr = NULL;

	cin >> testcase;
	arr = new string[testcase];

	for (int i = 0; i < testcase; i++) {
		int temp = 0;
		arr[i] = "";
		cin >> H >> W >> N;

		if (N%H == 0) {
			arr[i] += to_string(H);
			temp = N / H;
		}
		else {
			arr[i] += to_string(N%H);
			temp = (N / H) + 1;
		}

		if (temp < 10)
			arr[i] += "0" + to_string(temp);
		else
			arr[i] += to_string(temp);

	}
	for (int i = 0; i < testcase; i++)
		cout << arr[i] << endl;
	return 0;
}