#include<iostream>
#include<algorithm>
using namespace std;
struct I{
	int d,p;
};
bool operator>(const I &a,const I &b){
	return a.p!=b.p?a.p>b.p:a.d>b.d;
}
int main(){
	int n,m,ans,t,c;
	I i[10000];
	while(cin>>n>>m,n){
		ans=t=0;
		for(int j=0;j<n;j++)cin>>i[j].d>>i[j].p,ans+=i[j].d*i[j].p;
		sort(i,i+n,greater<I>());
		while(m>0)c=min(i[t].d,m),m-=c,ans-=c*i[t].p,t++;
		cout<<max(ans,0)<<endl;
	}
	return 0;
}