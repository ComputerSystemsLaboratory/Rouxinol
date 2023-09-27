#include<iostream>
using namespace std;
int d[100010]={0},n,q,a,b,c;
int main(){
	cin>>n>>q;
	while(q--){cin>>a>>b>>c;
		if(a){a=0,b--;
			while(b)a-=d[b],b-=b&-b;
			while(c)a+=d[c],c-=c&-c;
			cout<<a<<endl;
		}
		else while(b<=n)d[b]+=c,b+=b&-b;
	}
	return 0;
}