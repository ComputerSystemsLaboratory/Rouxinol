#include <iostream>
#include <string>

using namespace std;

bool isLittlrOrder(int a, int b, int c);

int main()
{
	string input1, input2, input3, output;
	cin >> input1;
	cin >> input2;
	cin >> input3;

	output = isLittlrOrder(stoi(input1), stoi(input2), stoi(input3)) ? "Yes" : "No";
	cout << output << endl;

	return 0;
}

bool isLittlrOrder(int a, int b, int c)
{
	if (a < b && b < c)
	{
		return true;
	}
	else
	{
		return false;
	}
}
