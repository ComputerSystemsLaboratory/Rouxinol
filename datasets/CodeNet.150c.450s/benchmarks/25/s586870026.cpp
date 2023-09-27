#include<iostream>
#include<cctype>
#include<cstdio>
using namespace std;
 
int main() {
    int count[26];
    char ch;
	
	for(int i = 0; i < 26; i++){
		count[i] = 0;
	}
 
    while (scanf("%c", &ch) != EOF) {
    	if(ch >= 'A'&& ch <= 'Z') ch += 32;
    	if(ch >= 'a'&& ch <= 'z'){
    		int num = ch - 'a';
    		count[num]++;
    	}
    }
	
	for(int i = 0;i < 26; i++){
		printf("%c : %d\n",i +'a', count[i]);
	}
	
	return 0;
}