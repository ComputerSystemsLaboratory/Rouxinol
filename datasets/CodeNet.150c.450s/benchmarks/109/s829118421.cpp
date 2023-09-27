#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
#include<queue>

using namespace std;

#define INF 999999999

int tim[24*60*60];

int main(){
	int i, j, k, n, ts, tg;
	int ans;
	string s, g;
	while(1){
		cin >> n;
		if(!n)break;
		for(i=0;i<24*60*60;i++) tim[i]=0;
		ans = 0;
		for(i=0;i<n;i++){
			cin >> s >> g;
			ts = ((s[0]-'0')*10+(s[1]-'0'))*60*60
			+ ((s[3]-'0')*10+(s[4]-'0'))*60
			+ (s[6]-'0')*10+(s[7]-'0');
			tg = ((g[0]-'0')*10+(g[1]-'0'))*60*60
			+ ((g[3]-'0')*10+(g[4]-'0'))*60
			+ (g[6]-'0')*10+(g[7]-'0');
			for(j=ts;j<tg;j++) tim[j]++;
		}
		for(i=0;i<24*60*60;i++)if(ans<=tim[i]) ans=tim[i];
		cout << ans << endl;
	}
	return 0;
}