#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int a,b,c,ans=0;
	cin>>a>>b>>c;
	for(int i=a;i<=b;i++)
		ans+=(c%i==0);
	cout<<ans<<endl;
}