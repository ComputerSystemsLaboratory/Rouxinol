#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define pb push_back

int main(){
	while(1){
		int a,b,c;

		cin>>a>>b>>c;

		if(a==0&&b==0&&c==0)return 0;

		int ans=0;
		for(int i=1;i<c;i++){
			for(int j=i;j<c;j++){

				int x=i*(100+a)/100;
				int y=j*(100+a)/100;

				if(x+y!=c)continue;

				int ans1=i*(100+b)/100;
				int ans2=j*(100+b)/100;

				ans=max(ans,ans1+ans2);
			}
		}
		cout<<ans<<endl;
	}
}