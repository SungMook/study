/*
* 문제 번호 : 1924
* 문제 이름 : 2007년
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int arr[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string result_arr[] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	int month = 0, day = 0, sum = 0;
	cin >> month >> day;

	for (int i = 0; i < month; i++) {
		if ((i + 1) == month) {
			sum += day;
		}
		else {
			sum += arr[i];
		}
	}
	sum -= 1;
	cout << result_arr[sum % 7] << endl;
	/*
	if (sum % 7 == 0)
		cout << "MON" << endl;
	else if (sum % 7 == 1)
		cout << "TUE" << endl;
	else if (sum % 7 == 2)
		cout << "WED" << endl;
	else if (sum % 7 == 3)
		cout << "THU" << endl;
	else if (sum % 7 == 4)
		cout << "FRI" << endl;
	else if (sum % 7 == 5)
		cout << "SAT" << endl;
	else
		cout << "SUN" << endl;
	*/
	return 0;
}