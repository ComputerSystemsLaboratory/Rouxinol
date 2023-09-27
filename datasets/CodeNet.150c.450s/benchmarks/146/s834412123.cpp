#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
using namespace std;

int main(){
	int n;
	cin>>n;
	rep(i,0,n){
		int ans=0;
		double x1,y1,x2,y2,x3,y3,x4,y4,m1,m2;
		cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		if(x1==x2||x3==x4){
			if(x1==x2&&x3==x4) ans=1;
		}else{
			m1=(y2-y1)/(x2-x1);
			m2=(y4-y3)/(x4-x3);
			if(fabs(m1-m2)<(1e-10)) ans=1;
		}
		if(ans)	cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}