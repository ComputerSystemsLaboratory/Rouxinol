#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int i,len;
	char str[20];

	cin >> str;

	len = strlen(str);

	for(i = len-1; i >= 0; i--)
		cout << str[i];

	cout << endl;

	return 0;
}