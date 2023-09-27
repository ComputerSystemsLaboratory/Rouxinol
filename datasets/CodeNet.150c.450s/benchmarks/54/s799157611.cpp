#include <iostream>
#include <string>
using namespace std;
int main(){
	string word , str;
	int counter = 0;
	cin >> word;
	for( int i=0 ; i<word.size() ; i++ )
		if( islower( word[i] ))
			word[i] = toupper( word[i] );
	while( cin >> str ){
		if( str != "end_of_text" ){
			for( int i=0 ; i<str.size() ; i++)
				if( islower(str[i]))
					str[i] = toupper(str[i]);
			}
		if( word == str )
			counter ++;
		if( str == "END_OF_TEXT" ) break;
	}
	cout << counter << endl;
}