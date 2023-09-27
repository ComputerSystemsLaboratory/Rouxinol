#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int g,l,m;
	for(int i=1;i<=n;i++){
	g=i%100;
	l=i%1000;
	m=i%10000;
if(3000<=m && m<4000){g=m/100;}
if(300<=l && l<400){g=l/10;}
	if(i%3==0){cout<<" "<<i;}
	else if(i%10==3){cout<<" "<<i;}
	if(30<=g && g<40 && i%3!=0 && i%10!=3){cout<<" "<<i;}
	}

cout<<endl;
return 0;
}
