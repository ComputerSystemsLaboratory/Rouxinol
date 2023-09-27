#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cmath>
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define PI acos(-1)
int main(){
int a,b;
char d;
while(cin>>a>>d>>b,d!='?'){
int ans;
if(d=='+')ans=a+b;
else if(d=='-')ans=a-b;
else if(d=='*')ans=a*b;
else ans=a/b;
cout<<ans<<endl;
}
}