#include <iostream>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define rep2(i,m,n) for(int i=m;i<n;i++)

int N,M,x[1501],y[1501];

int main(){
	while(cin>>N>>M&&N){
		int ans=0,l;
		x[0]=0;y[0]=0;
		rep(i,N){cin>>l;y[i+1]=y[i]+l;}
		rep(i,M){cin>>l;x[i+1]=x[i]+l;}
		map<int,int> m;
		rep(i,N+1)rep2(j,i+1,N+1)m[y[j]-y[i]]++;
		rep(i,M+1)rep2(j,i+1,M+1)ans+=m[x[j]-x[i]];
		cout<<ans<<endl;
	}
}