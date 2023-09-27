#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
int s[100005];
int a;
scanf("%lld",&a);
fill(s,s+a+3,LONG_MAX);
int b;
for(int c=0;c<a;c++){
	scanf("%lld",&b);
	auto x=lower_bound(s,s+a+1,b);
	*x=b;
}
for(int q=0;q<a+3;q++){
if(s[q]==LONG_MAX){printf("%lld\n",q);break;}
}

}