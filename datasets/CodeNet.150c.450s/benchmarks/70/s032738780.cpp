#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
using namespace std;

int main(){
	int m,n,end[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	while(1){
		int day=0,r;
		cin>>m>>n;
		if(m==0) break;
		rep(i,0,m-1) day+=end[i];
		day+=n;
		r=day%7;
		if(r==1) cout<<"Thursday"<<endl;
		else if(r==2) cout<<"Friday"<<endl;
		else if(r==3) cout<<"Saturday"<<endl;
		else if(r==4) cout<<"Sunday"<<endl;
		else if(r==5) cout<<"Monday"<<endl;
		else if(r==6) cout<<"Tuesday"<<endl;
		else if(r==0) cout<<"Wednesday"<<endl;
	}
}