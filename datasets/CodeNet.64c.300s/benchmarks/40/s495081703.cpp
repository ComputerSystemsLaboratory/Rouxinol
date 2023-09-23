#include<cstdio>
#include<iostream>
#include<cctype>
using namespace std;
int main(){
	char ch;
	while(1){
		scanf("%c",&ch);
		if(isalpha(ch)){
			if(islower(ch))cout<<(char)toupper(ch);
			else if(isupper(ch))cout<<(char)tolower(ch);
		}
		else {cout<<ch;}
		if(ch=='\n')break;
	}
return 0;
}

