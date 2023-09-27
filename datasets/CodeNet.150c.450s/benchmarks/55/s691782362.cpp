#include <iostream>
#include <cstring>
#include <cctype>
#include <stdio.h>
#include <cstdio>

using namespace std;

int main(){
	char a[1001];
	for(int i=0;;i++){
		scanf("%s",a);
		if(a[0]=='0')break;
		int b=0;
		for(int j=0;j<strlen(a);j++){
			b+=(a[j]-'0');
		}
		printf("%d\n",b);
	}
	return 0;
}