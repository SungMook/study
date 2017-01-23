/*
* 문제 번호 : 10809
* 문제 이름 : 알파벳 찾기
*/
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
	int arr[26], index = 0, len = 0;
	string input;
	memset(arr, -1, sizeof(arr));

	cin >> input;
	len = input.length();
	for (int i = 0; i < len; i++) {
		index = input[i] - 'a';
		arr[index] = input.find_first_of(input[i], 0);
	}

	for (int i = 0; i < 26; i++)
		cout << arr[i] << " ";

	return 0;
}