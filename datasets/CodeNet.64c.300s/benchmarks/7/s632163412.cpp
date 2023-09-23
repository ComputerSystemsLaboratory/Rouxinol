#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
	int s[14],h[14],c[14],d[14],i,n,x;
	char a;
	cin>>n;
	for(i=1;i<=13;i++){
		s[i]=0;
		h[i]=0;
		c[i]=0;
		d[i]=0;
	}
	for(i=1;i<=n;i++) {
		cin>>a>>x;
		if(a=='S') s[x]=1;
		else if(a=='H') h[x]=1;
		else if(a=='C') c[x]=1;
		else d[x]=1;
	}
	for(i=1;i<=13;i++){	
		if(s[i]==0) cout<<"S"<<" "<<i<<endl;
	}
	for(i=1;i<=13;i++){	
		if(h[i]==0) cout<<"H"<<" "<<i<<endl;
	}
	for(i=1;i<=13;i++){	
		if(c[i]==0) cout<<"C"<<" "<<i<<endl;
	}
	for(i=1;i<=13;i++){	
		if(d[i]==0) cout<<"D"<<" "<<i<<endl;
	}
	
	return 0;
}

