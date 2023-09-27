#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int alphabet[26] = {0};

void charCount(string str){
	int index;
	for(int i = 0; i < str.length(); i++){
		str[i] = tolower(str[i]);
		index = str[i] - 'a';
		if( 0 <= index && index <= 26){
			alphabet[index]++;
		}
	}
	
}

int main()
{
	string str;
	getline(cin,str);
	while (!str.empty()){
		charCount(str);
		getline(cin,str);
	}
	
	for(int i = 0 ; i < 26; i++){
		char ch = i + 'a';
		cout<<ch<<" : "<<alphabet[i]<<endl;
	}
	return 0;
}