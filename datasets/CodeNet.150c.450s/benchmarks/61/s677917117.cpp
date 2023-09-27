#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	int n,a,b,c,x;
	while(cin >> n >> a >> b >> c >> x,n){
		int cnt=0,y[100];
		for(int i=0;i<n;i++){
			cin >> y[i];
		}
		int idx = 0;
		while(1){
			if(cnt > 10000) break;
			if(x == y[idx]) idx++;
			if(idx >= n) break;
			x = (a*x + b)%c;
			cnt++;
		}
		if(cnt > 10000){
			cout << -1 << endl;
		} else {
			cout << cnt << endl;
		}
	}
	return 0;
}