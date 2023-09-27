#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);++i)

int main(){
	long double a,b;
	int c;
	while(cin>>a>>b>>c){
		int ans=0;
		if(a==0&&b==0&&c==0) break;
		int n=c+100;
		rep(i,n){
			rep(j,n){
			if(i==0) continue;
			int aa=i;
			int bb=j;
			if(bb==0) continue;
			// if(aa>=c) continue;
			// if(bb>=c) continue;
			// cout<<i<<endl;
			int aaa=aa*(100.0+a)/100.0;
			int bbb=bb*(100.0+a)/100.0;
			// cout<<aaa+bbb<<" "<<c<<endl;
			if(aaa+bbb!=c) continue;
			aaa=aa*(100.0+b)/100.0;
			bbb=bb*(100.0+b)/100.0;
			// cout<<aaa<<" "<<bbb<<endl;
			int tmp=aaa+bbb;
			// tmp+=bbb*(100.0+b)/100.0;
			ans=max(ans,tmp);
		}}
		cout<<ans<<endl;
	}
}