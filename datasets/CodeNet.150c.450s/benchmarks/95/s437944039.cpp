#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

#define INF 999999999

int main(){
	int n, foot[2], now, ans;
	string s;
	while(1){
		cin >> n;
		if(!n) break;
		foot[0] = 0;
		foot[1] = 0;
		now = 0;
		ans=0;
		for(int i = 0;i<n ;i++){
			cin >> s;
			if(s[0]=='l'&&s[1]=='u')foot[0]=1;
			else if(s[0]=='l'&&s[1]=='d')foot[0]=0;
			else if(s[0]=='r'&&s[1]=='u')foot[1]=1;
			else if(s[0]=='r'&&s[1]=='d')foot[1]=0;
			
			if(foot[0]==foot[1]&&now+foot[0]==1){
				ans++;
				now=1-now;
			}
		}
		cout << ans << endl;
	}
	return 0;
}