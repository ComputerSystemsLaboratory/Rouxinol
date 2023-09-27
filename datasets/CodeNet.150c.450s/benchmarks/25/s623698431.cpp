#include<iostream>
#include<stdio.h>
#include <ctype.h>
using namespace std;

int main()
{
	char c;
	char alpha_count[26]={0};

	int n=0;
    
    while (cin >> c) {
		if(isalpha(c)){
			c = tolower(c);
		}
	    alpha_count[c-'a']++;
	}
	for(int i=0; i<26; i++) {
		printf("%c : %d\n", i+'a', alpha_count[i]);
	}
	return 0;
}