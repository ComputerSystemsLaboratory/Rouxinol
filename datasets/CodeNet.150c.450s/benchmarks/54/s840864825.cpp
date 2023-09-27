#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string w, s;
	int count=0;
	
	cin >> w;
	transform( w.begin(), w.end(), w.begin(), ::tolower );
	
	while(1){
		cin >> s;
		if(s == "END_OF_TEXT") break;
		
		transform( s.begin(), s.end(), s.begin(), ::tolower );
		if(w == s) ++count;
	}
	
	printf("%d\n", count);	

	return 0;
}