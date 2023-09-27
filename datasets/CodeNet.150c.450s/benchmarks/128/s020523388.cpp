#include<iostream>
using namespace std;
int main()
{
char str[21] = { 0 };
int length;
cin >> str;
for (int i = 20; i >= 0; i--){
if (str[i] != 0){
length = i;
break;
}
}
	for (; length >= 0; length--)
		cout << str[length];
	cout << endl;
	return 0;
}