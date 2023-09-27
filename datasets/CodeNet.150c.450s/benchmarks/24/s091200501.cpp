#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
#include<sstream>
#include<iomanip>

using namespace std;

#define INF 999999999

int main(){
	int ans, i, j, k, n, m, d, p, dis;
	int at[11];
	while(1){
		cin >> n >> m;
		if(!n) break;
		for(k=0;k<=10;k++)at[k] = 0;
		ans = 0;
		dis = 0;
		for(i=0;i<n;i++){
			cin >> d >> p;
			at[p] += d;
			dis += d;
		}
		dis -= m;
		for(j=0;j<=10&&dis>0;j++){
			if(at[j] <= dis){
				dis -= at[j];
				ans += at[j] * j;
			}
			else{
				ans += dis * j;
				dis = 0;
			}
		}
		cout << ans << endl;
	}
	return 0;
}