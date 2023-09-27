#include <iostream>
#include <string>
using namespace std;

int main(){
	
	char str;
	int n[26] = {0};

	while( cin >> str ){
		if( cin.eof() ) break ;
		
		if(str >= 'a'){
			++n[str - 'a'];
		}
		
		else if(str >= 'A'){
			++n[str - 'A'];
		}
		
	}
	
	for(int i = 0; i < 26; ++i){
		
		cout << char('a' + i) << " : " << int(n[i]) << endl;
	}
	
	return 0;
}