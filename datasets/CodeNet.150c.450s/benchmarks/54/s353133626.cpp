#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	string word;
	cin >> word;
	for( int i=0 ; i<word.size() ; i++ ){
		if( isupper(word[i]) )
			word[i] = tolower(word[i]);
	}
	//cout << word << endl;
	string sign="END_OF_TEXT";
	int counter=0;
	while(cin>>str){
		if( sign == str )
			break;
		for( int i=0 ; i<str.size() ; i++ ){
			if( isupper(str[i]))
				str[i] = tolower(str[i]);
		}
		//cout << str << endl;
		if( str == word )
			counter++;
	}
	cout << counter << endl;
}