#include<iostream>
using namespace std;
void print();
int main()
{
	print();
	cout.put('\n');
}

void print()
{
	char c = cin.get();
	if (c == '\n');
	else
	{
		print();
		cout << c;
	}
}