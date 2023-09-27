#include <bits/stdc++.h>
using namespace std;
#define rep(i,l,n) for(i=l;i<n;i++)


int main(){
	int i,w,n,a,b,c[35],d;
	char k;

	cin>>w;
	cin>>n;
	//cout<<w<<" "<<n<<endl;
	rep(i,1,w+1){
		c[i]=i;
	}
	rep(i,1,n+1){
		cin>>a>>k>>b;
		//cout<<c[a]<<" "<<c[b]<<endl;
		swap(c[a],c[b]);
		//cout<<c[a]<<" "<<c[b]<<endl<<endl;
		
	}
	rep(i,1,w+1){
		cout<<c[i]<<endl;
	}
	

}