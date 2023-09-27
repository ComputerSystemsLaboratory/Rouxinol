#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

const long N = 16777216;
char str[N][13];
long n;

int getInt(char ch){
	switch (ch)
	{
	case 'A': return 1;
	case 'T': return 2;
	case 'G': return 3;
	case 'C': return 4;
	}
	return 0;
}
long getKey(char* tmp){
	long sum = 0, p=1;
	for (int i = 0; i < strlen(tmp); ++i){
		sum += p*getInt(tmp[i]);
		p *= 5;
	}
	return sum;
}

int main(){
	scanf("%ld",&n);
	while (n--){
		char ch[13], CH[13]; scanf("%s", ch);
		scanf("%s", CH); long tmp = getKey(CH);
		if ( strcmp(ch,"insert")==0){
			strcpy(str[tmp], CH);
		}
		else if ( strcmp(ch, "find")==0){
			if (strcmp(str[tmp],CH)==0) cout << "yes\n";
			else cout << "no\n";
		}
	}
}