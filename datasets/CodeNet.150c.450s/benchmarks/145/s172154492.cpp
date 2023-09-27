//#include<bits/stdc++.h>
#include<iostream>
#include <vector>
#include <cstdio>
#include<algorithm>
#include <utility>
#include<string>
using namespace std;
string str[10000] = { "" };
char ch[10000];
int input();
int main() {
	int a,most=0;
	a = input();
	string  longest;
	int m[10000] = { 0 }, l;
	for (int i = 0; i <= a + 1; i++) {
		for (int j = i + 1; j <= a; j++) {
			if (str[i] == str[j]) {
				m[i]++;
			}
		}
	}int k,ma=0,locate,memo;
	for (k = 0; k <= a+1; k++) {
		if (m[k] > ma) {
			ma = m[k];
			locate= k;
		}
	}
	for (int f = 0; f <= a+1; f++) {
		if (str[f].size()> most) {
			most = str[f].size();
			memo = f;
		}
	}
	longest = str[memo];
	cout << str[locate] << " " << longest << endl;
	return 0;
}
int input() {
	int i = 0, j = 0;
	while (1) {
		scanf("%c", &ch[i]);
		if (isupper(ch[i])) {
			ch[i] += 'a' - 'A';
		}
		if (ch[i] == ' ') {
			j++;
		}
		else if (ch[i] == '\n') {
			break;
		}
		else {
			str[j] += ch[i];
		}
		
	}
	return j;
}