#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;

int main(){
	char ch[1201];
	int alpha[26] = {};

	for(int i=0; i<1201; i++){
		scanf("%c",&ch[i]);
		if(ch[i] == '\0') break;
		ch[i] = tolower(ch[i]);
		if( isalpha(ch[i]) ){
			alpha[ch[i]-'a']++;
		}
	}

	for(int i=0; i<26; i++){
		printf("%c : %d\n",'a'+i,alpha[i]);
	}

	return 0;
}