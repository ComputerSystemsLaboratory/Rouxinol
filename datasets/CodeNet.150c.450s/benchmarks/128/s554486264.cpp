#include <iostream>
using namespace std;

int main(){
	const int max = 20; 
	char str[max + 1];
	char c;
	int count = 0;
	while(cin.get(c)){
		str[count] = c;
		count++;
	}
	for(int i = 1; i <= count-1; i++)
		cout << str[count - i - 1];
	cout << endl;
	return 0;
}