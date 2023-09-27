#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
	char num[1000];
	int sum;
	while(1){
		cin >> num;
		if(num[0] == '0') break;
		sum = 0;
		for(int i = 0;i < strlen(num);i++){
			sum += num[i] - '0';
		}
		cout << sum << endl;
	}
	return 0;	
}