#include <iostream>
#include <stdio.h>
#include <cctype>
using namespace std;
int main(){


char ch;
for (;;){

	scanf("%c",&ch);
	if (islower(ch)){
		ch = toupper(ch);
    }
    else if (isupper(ch)){
    	ch = tolower(ch);
    }
	cout << ch;
	if (ch == '\n')break;
	
}


    return 0 ;


}   