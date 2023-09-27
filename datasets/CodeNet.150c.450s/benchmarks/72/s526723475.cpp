#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	while(1){
		char c;
		scanf("%c",&c);
		if(c=='\n') { cout << endl; return 0;}
		char d = c;
		if(islower(c)) d = toupper(c);
		else if(isupper(c)) d = tolower(c);
		cout << d;
	}
}