#include <iostream>
using namespace std;
int main()
{
	int i;
	char str[30];
	cin >> str;
	for(i=0; str[i] != 0; i++);
	i--;
	for(;i>=0; i--){
		cout << str[i];
	}
	cout << endl;
	return(0);
}