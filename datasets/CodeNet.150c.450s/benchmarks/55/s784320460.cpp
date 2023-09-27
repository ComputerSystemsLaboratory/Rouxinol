#include <iostream>
#include <string>
using namespace std;


int stringToInt(string str){
	int num = 0;
	for(int i = 0; i < str.length(); i++){
		num += str[i] - '0';
	}
	return num;
} 


int main()
{
	string str;
	cin>>str;
	int num = stringToInt(str);
	while(num != 0){
		cout<<num<<endl;
		cin>>str;
		num = stringToInt(str);
	}
	return 0;
}