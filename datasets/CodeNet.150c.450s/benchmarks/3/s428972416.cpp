#include<iostream>
using namespace std;
void print(char str[],int begin,int end)
{
	for (int i = begin; i <= end; i++)
		cout << str[i];
	cout << endl;
}
void reverse(char str[],int begin,int end)
{
	int mid = (begin + end) / 2;
	for(int i = begin;i <= mid;i++)
	{
		char tmp = str[i];
		str[i] = str[end + begin - i];
		str[end + begin - i] = tmp;
	}
}
void replace(char str[],int begin,int end,char replaceStr[])
{
	for(int i = begin;i <= end;i++)
		str[i] = replaceStr[i - begin];
}
int main()
{
	char inputStr[1000];
	cin >> inputStr;
	int q;
	cin >> q;
	for(int i = 0;i < q;i++)
	{
		char command[10];
		cin >> command;
		int b, e;
		cin >> b >> e;
		switch (command[2])
		{
		case 'i':
			print(inputStr, b, e);
			break;
		case 'v':
			reverse(inputStr, b, e);
			break;
		case 'p':
			char rp[1000];
			cin >> rp;
			replace(inputStr, b, e, rp);
			break;
		}
	}
	return 0;
}
