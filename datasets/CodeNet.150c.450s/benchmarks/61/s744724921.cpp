#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

#define INF 999999999

int main(){
	int ans, n, a, b, c, x, now, y[101];
	
	while(1){
		cin >> n >> a >> b >> c >> x;
		if(!n) break;
		for(int i=0; i<n; i++){
			cin >> y[i];
		}
		now = 0;
		ans = -1;
		while(ans <= 10000 && now < n){
			ans++;
			//cout << "(x,now,y)=" << x << " " << now << " " << y[now] << endl;
			if(x == y[now]){
				now++;
			}
			x = ( a * x + b ) % c;
		}
		if(ans <= 10000)cout << ans << endl;
		else cout << "-1" << endl;
	}
	return 0;
}