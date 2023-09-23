#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)

using namespace std;

int main(){

	int x,y,s;

	while(1){
		cin>>x>>y>>s;
		if(x==0 && y==0 && s==0) break;
		int ans = -1;
		for(int i=1; i<1000; i++){
			for(int j=1; j<1000; j++){
				if((i*(100+x))/100 + (j*(100+x))/100 != s) continue;
				ans = max(ans , (i*(100+y))/100 + (j*(100+y)/100));
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}