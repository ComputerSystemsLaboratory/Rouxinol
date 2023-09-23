#include <iostream>
#include <cstdio>
#include <cctype>
using namespace std;

int main(void){
		char s;
			
		while(1){
				scanf("%c", &s);
				if(islower(s)){
						printf("%c",toupper(s));			
				}else if(isupper(s)){
						printf("%c",tolower(s));
				}else{
						printf("%c", s);
				}
				if( s == '\n') break;
		}
		return 0;
}