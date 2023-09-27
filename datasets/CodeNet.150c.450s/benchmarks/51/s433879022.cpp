#include<algorithm>
#include<iostream>
#include<map>


using namespace std;



int main()
{
	map<int , int>data;

	for (int i = 0; i < 28; i++)
	{
		int input;
		cin >> input;

		data[input]++;
	}

	for (int i = 1; i <= 30; i++)
	{
		if (data[i] == 0)
		{
			cout << i << endl;
		}
	}

	return 0;
}