#include <bits/stdc++.h>
using namespace std;

int n;
string str[2];
string s[4] = {"lu","ru","ld","rd"};

int main(){
	while(scanf("%d",&n),n){
		int ans = 0;
		for(int i = 1; i < n; i += 2){
			cin >> str[0] >> str[1];
			if((str[0]==s[0]&&str[1]==s[1])||(str[0]==s[1]&&str[1]==s[0])||(str[0]==s[2]&&str[1]==s[3])||(str[0]==s[3]&&str[1]==s[2])) ans++;
		}
		if(n%2==1) cin >> str[0];
		printf("%d\n",ans);
	}
}