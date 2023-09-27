#include <bits/stdc++.h>
using namespace std;

int main(void){
int n;
int i,j,k;
long ans=0;
long t[998][998];
for(i=1;i<998;i++){
	for(j=1;j<999;j++){
		if(i<j)t[i][j]=(i+j)*(j-i+1)/2;
	}
}
while(true){
ans=0;
cin>>n;
if(n==0)return 0;
for(i=1;i<998;i++){
	for(j=1;j<998;j++){
		if(i<j&&t[i][j]==n){ans+=1;/*cout<<"i="<<i<<endl;cout<<"j="<<j<<endl;*/}
	}
}
cout<<ans<<endl;
}
return 0;
}

