#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main(){
	int a, L;
	while (1){
		cin >> a >> L;
		if (a == 0 && L == 0)return 0;
		vector<int> memo(1000000, -1);
		memo[a] = 0;
		
		for(int i=1;;i++){
			string s = to_string(a);
			while ((int)s.size() < L)s = "0" + s;
			string t = s;
			sort(s.begin(), s.end());
			sort(t.begin(), t.end());
			reverse(s.begin(), s.end());
			a = stoi(s) - stoi(t);

			if (memo[a] >= 0){
				printf("%d %d %d\n", memo[a], a, i - memo[a]);
				break;
			}
			memo[a] = i;
		}

	}
}