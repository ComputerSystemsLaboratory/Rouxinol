#include <bits/stdc++.h>
using namespace std;

int main(void){
int n;
string s;
int r,l;//0ならした
int t;//0なら下にいる
int i,j,k;
int ans=0;

while(true){
cin>>n;
if(n==0)return 0;
ans=0;
r=0;l=0;t=0;
for(i=0;i<n;i++){
	cin>>s;
	if(s=="lu"){
		l=1;
	}
	else if(s=="ru"){
		r=1;
	}
	else if(s=="ld"){
		l=0;
	}
	else if(s=="rd"){
		r=0;
	}
	if(t==0&&r==1&&l==1){t=1;ans+=1;}
	if(t==1&&r==0&&l==0){t=0;ans+=1;}	
}
cout<<ans<<endl;
}
return 0;
}

