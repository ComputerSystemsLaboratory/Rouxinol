#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int n;
	while (scanf("%d", &n), n) {
		int cnt = 0;
		string back;
		rep(i, n) {
			string s; cin >> s;
			if (s == "lu"&&back == "ru")cnt++;
			if (s == "ru"&&back == "lu")cnt++;
			if (s == "ld"&&back == "rd")cnt++;
			if (s == "rd"&&back == "ld")cnt++;
			back = s;
		}
		printf("%d\n", cnt);
	}
}