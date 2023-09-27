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
long long getKey(char* tmp){
	long long sum = 0, p=1;
	for (int i = 0; i < strlen(tmp); ++i){
		sum += p*getInt(tmp[i]);
		p *= 5;
	}
	return sum;
}

int main(){
	scanf("%ld",&n);
	while (n--){
		char ch[13]; scanf("%s", ch);
		if ( strcmp(ch,"insert")==0){
			scanf("%s", ch);
			long long tmp = getKey(ch);
			strcpy(str[tmp], ch);
		}
		else if ( strcmp(ch, "find")==0){
			scanf("%s", ch);
			long long tmp = getKey(ch);
			if (strcmp(str[tmp],ch)==0) cout << "yes\n";
			else cout << "no\n";
		}
	}
}