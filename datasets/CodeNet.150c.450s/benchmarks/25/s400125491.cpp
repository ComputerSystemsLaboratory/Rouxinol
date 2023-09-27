#include<iostream>
#include<cctype>
#include<cstdio>
using namespace std;

int main(){

	char moji;
	int alpha[26] = {0};

	while((moji = getchar()) != EOF){
		moji = tolower(moji);
		alpha[moji - 'a']++;
	}

	for(int i = 0; i < 26; i++){
		printf("%c : %d\n", 97+i, alpha[i]);
	}

	return 0;
}
