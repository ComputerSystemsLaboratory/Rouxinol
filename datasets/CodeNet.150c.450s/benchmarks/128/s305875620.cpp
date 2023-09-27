#include<iostream>
#include<string>

using namespace std;

int main()
{
	char str[20];
	int length;
	
	cin >> str;
	for(length = 0; str[length] != '\0'; length++);
	
	for(int i = length-1; i > -1; i--){
		printf("%c",str[i]);
	}
	cout << endl;
}