#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char inputInt[2000];
	while(true)
	{
		cin.getline(inputInt, 2000);
		int length = strlen(inputInt);
		int sum = 0;
		if(length == 1 && inputInt[0] == '0')
			break;
		for(int i = 0;i < length;i++)
		{
			sum += inputInt[i] - '0';
		}
		cout << sum << endl;
	}
	return 0;
}
