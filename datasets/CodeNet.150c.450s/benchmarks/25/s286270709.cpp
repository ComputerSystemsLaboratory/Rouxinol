#include<iostream>
#include<stdio.h>
#include<cstdio>
#include<cctype>
using namespace std;
int main(){
    char ch;
    int num[26]={};
    while( scanf("%c", &ch) != EOF ){
		if(isupper(ch)){
		    ch = tolower(ch);
		}
	
		if('a'<=ch && ch<='z'){
		    num[ch-'a'] += 1;
		}
	}
    
     ///出力
        for(char ci='a';ci<='z';ci++){
            cout << ci << " " << ":" << " " << num[ci-'a'] << endl;
            
        }
}
