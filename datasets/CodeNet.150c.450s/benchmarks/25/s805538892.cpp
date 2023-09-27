#include<iostream>
#include<cctype>
#include<cstdio>
using namespace std;
int main(){
	char ch;
	int checker[26] = {};
	while (cin >> ch){
		if (ch == '\n'){
			break;
		}
		ch = tolower(ch);
		if (isalpha(ch)){
			checker[ch - 'a']++;
		}
	}
	for (int i = 0; i < 26; i++){
		printf("%c : %d\n", i + 'a', checker[i]);
	}
	return 0;
}