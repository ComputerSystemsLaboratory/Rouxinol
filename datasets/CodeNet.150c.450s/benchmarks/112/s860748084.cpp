#include<iostream>
#include<cstdio>
using namespace std;

char ans[100000000];
int main(){
	int n;
	while (cin >> n, n){
		char conv[128] = {}, input;
		int m;
		for (int i = 0; i < n; i++){
			cin >> input;
			cin >> conv[input];
		}
		cin >> m;
		for (int i = 0; i < m; i++){
			cin >> input;
			if (conv[input] != 0) ans[i] = conv[input];
			else ans[i] = input;
			/*if (conv[input] != 0) printf("%c\n", conv[input]);
			else printf("%c\n", input);*/
		}
		for (int i = 0; i < m; i++){
			printf("%c", ans[i]);
		}puts("");
	}
}