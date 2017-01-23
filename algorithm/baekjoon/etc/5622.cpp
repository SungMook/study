/*
* 문제 번호 : 5622
* 문제 이름 : 다이얼
*/
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	char input[16] = { 0, };
	int result = 0;
	cin.getline(input, 16);

	for (int i = 0; i < strlen(input); i++) {
		if (input[i] >= 'A' && input[i] <= 'C')
			result += 3;
		else if (input[i] >= 'D' && input[i] <= 'F')
			result += 4;
		else if (input[i] >= 'G' && input[i] <= 'I')
			result += 5;
		else if (input[i] >= 'J' && input[i] <= 'L')
			result += 6;
		else if (input[i] >= 'M' && input[i] <= 'O')
			result += 7;
		else if (input[i] >= 'P' && input[i] <= 'S')
			result += 8;
		else if (input[i] >= 'T' && input[i] <= 'V')
			result += 9;
		else if (input[i] >= 'W' && input[i] <= 'Z')
			result += 10;
		else
			continue;
	}
	cout << result << endl;
	return 0;
}