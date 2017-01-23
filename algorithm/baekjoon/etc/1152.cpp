/*
* 문제 번호 : 1152
* 문제 이름 : 단어의 개수
*/
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	char arr[1000000] = { 0, };
	int count = 0;
	cin.getline(arr, 1000000);
	if (strlen(arr) == 0)
		cout << "0" << endl;
	else {
		for (int i = 0; i < strlen(arr); i++) {
			if (arr[i] == ' ') {
				if (i != 0) {
					if (arr[i - 1] != ' ')
						count++;
				}
			}
		}
		if (arr[strlen(arr) - 1] == ' ')
			cout << count << endl;
		else
			cout << count + 1 << endl;
	}
	return 0;
}