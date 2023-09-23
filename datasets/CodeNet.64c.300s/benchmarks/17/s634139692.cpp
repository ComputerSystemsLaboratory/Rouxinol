#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)

using namespace std;

int main(){

	int x,y,s;
	vector<int> vx;
	vector<int> vy;
	vector<int> vs;

	while(1){
		cin>>x>>y>>s;
		if(x==0 && y==0 && s==0) break;
		vx.push_back(x);
		vy.push_back(y);
		vs.push_back(s);
	}

	for(int l=0; l<vx.size(); l++){
		int ans = -1;
		for(int i=1; i<1000; i++){
			for(int j=1; j<1000; j++){
				if((i*(100+vx[l]))/100 + (j*(100+vx[l]))/100 != vs[l]) continue;
				ans = max(ans , (i*(100+vy[l]))/100 + (j*(100+vy[l]))/100);
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}