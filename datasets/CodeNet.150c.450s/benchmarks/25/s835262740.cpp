#include<iostream>
#include<stdio.h>
#include<cctype>
using namespace std;

int main(){
	char ch;
	int counter[26];

	for (int i = 0; i < 26; i++){
		counter[i] = 0;
	}

	while (cin >> ch){
		if (islower(ch)){
			counter[ch - 'a']++;
		}
		else if (isupper(ch)){
			counter[ch - 'A']++;
		}
	}

	for (int i = 0; i < 26; i++){
		printf("%c : %d\n", i + 'a', counter[i]);
	}

	return 0;
}