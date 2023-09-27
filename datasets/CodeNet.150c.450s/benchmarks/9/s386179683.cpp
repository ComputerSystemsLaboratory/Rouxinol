#include<iostream>
#include<cstring>
using namespace std;
void print(char str[],int length,int begin)
{
	for(int i = 0;i < length;i++)
	{
		cout << str[(begin + i) % length];
	}
	cout << endl;
}
int main()
{
	char inputStr[200] = {'\0'};
	int length = 0;
	int index = 0;

	while (true)
	{
		cin >> inputStr;
		if(strcmp(inputStr,"-") == 0)
			break;
		index = 0;
		length = strlen(inputStr);
		int m,h;
		cin >> m;
		for(int i = 0;i < m;i++)
		{
			cin >> h;
			index = (index + h) % length;
		}
		print(inputStr, length, index);
	}
	return 0;
}
