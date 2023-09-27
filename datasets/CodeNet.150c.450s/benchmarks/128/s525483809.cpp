#include <iostream>
using namespace std;

int main()
{
	char str[20];
	char* p=str;
	cin >> str;
	int count = 0;
	while(*p != NULL){
		p++;
		count++;
	}
	count--;
	for(int i=count;i>=0;i--){
		cout << str[i];
	}
	cout << endl;
	return 0;
}