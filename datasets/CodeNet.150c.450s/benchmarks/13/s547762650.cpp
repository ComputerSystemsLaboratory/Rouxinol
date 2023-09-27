#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<stdio.h>
#include<string.h>

using namespace std;

int main() {	
	char p[101], s[101];
	int plen, slen, n,j,i;
	scanf("%s", p);
	scanf("%s", s);
	plen = strlen(p);
	slen = strlen(s);
	for (i = 0; i < plen; i++) {
		if (p[i] == s[0]) {
			n = i;
			for (j = 1; j < slen; j++) {
				n++;
				if (n==plen) n = 0;
				if (p[n] != s[j]) break;
				
			}
		}
		if (j == slen) {
			printf("Yes\n");
			break;
		}
	}
	if (i == plen) printf("No\n");
	return 0;
}