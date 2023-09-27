#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;

	string str2;
	int size = (int)str.size();
	str2.resize(size);
	for(int i =0; i<size;++i)
	{
		str2[size-1-i] = str[i];
	}

	cout << str2 << endl;
	return(0);
}