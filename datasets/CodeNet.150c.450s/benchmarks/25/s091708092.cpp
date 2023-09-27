#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cctype>
using namespace std;

int main(void){
	char s;
	int num[26]={0};
	while(cin >>s){
		s=tolower(s);
		if(isalpha(s)){
			num[s-'a']++;
		}
	}
	for(int i=0; i<26; i++){
		printf("%c : %d\n", i+'a', num[i]);
	}
    return 0;
}