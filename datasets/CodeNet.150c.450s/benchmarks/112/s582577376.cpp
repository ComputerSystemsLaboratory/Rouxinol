#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;

int main(void){
	while (1){
		int n;
		scanf("%d", &n);
		if (n == 0)return 0;
		vector<char> code1;
		vector<char> code2;
		for (int i = 0; i < n; i++){
			char a, b;
			scanf(" %c", &a);
			scanf(" %c", &b);
			code1.push_back(a);
			code2.push_back(b);
		}
		int m;
		scanf("%d", &m);
		vector<char> ans;
		for (int i = 0; i < m; i++){
			char a;
			scanf(" %c", &a);
			ans.push_back(a);
			for (int j = 0; j < n; j++){
				if (ans[i] == code1[j]){
					ans[i] = code2[j];
					break;
				}
			}
			printf("%c", ans[i]);
		}
		printf("\n");
	}
}