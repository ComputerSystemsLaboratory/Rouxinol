#include<iostream>
#include<string>
using namespace std;

int main()
{
	string number;
	while (cin >> number, number != "0") {
		int sum = 0;
		for (int i = 0; i < number.size(); i++) {
			sum += number[i] - '0';
		}
		cout << sum << endl;
	}
    return 0;
}