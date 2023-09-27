#include <iostream>
#include <string>
using namespace std;

int main()
{
	int array[4] = { 0, 0, 0, 0 };

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string tmp;
		cin >> tmp;
		if (tmp == "AC")
		{
			array[0]++;
		}
		else if (tmp == "WA")
		{
			array[1]++;
		}
		else if (tmp == "TLE")
		{
			array[2]++;
		}
		else
		{
			array[3]++;
		}
	}

	cout << "AC x " << array[0] << endl;
	cout << "WA x " << array[1] << endl;
	cout << "TLE x " << array[2] << endl;
	cout << "RE x " << array[3] << endl;

	return 0;
}