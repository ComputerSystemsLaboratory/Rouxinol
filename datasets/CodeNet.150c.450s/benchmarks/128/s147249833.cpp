#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main(void)
{
	int len;
	char str[20];
	cin >> str;
	
	string str1 = str;
	len = str1.size();
	
	for(int i = len-1; i >= 0; i--){
		cout << str[i];
	}
	cout << endl;
	return 0;
}