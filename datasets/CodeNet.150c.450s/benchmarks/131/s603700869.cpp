#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int f(int y,int m,int d){
	return (y-1)/3*590+(y-1)%3*39*5+(m-1)/2*(39+!(y%3))+(m-1)%2*20+d;
}
int main(){
	while(1){
		int a,l;
		cin>>a>>l;
		if(!l)break;
		int d[21]={a};
		REP(i,1,20){
			int b[l],c[l];
			int t=d[i-1];
			rep(j,l){
				b[j]=c[j]=t%10;
				t/=10;
			}
			sort(b,b+l);
			reverse(b,b+l);
			sort(c,c+l);
			int bb=0,cc=0;
			rep(j,l)bb=bb*10+b[j];
			rep(j,l)cc=cc*10+c[j];
			d[i]=bb-cc;
		}
		REP(i,1,20){
			rep(j,i){
				if(d[i]==d[j]){
					cout<<j<<" "<<d[i]<<" "<<i-j<<endl;
					goto END;
				}
			}
		}
		END:;
	}
	return 0;
}
