#include<iostream>
using namespace std;
#define L long long int
int main(){
int n,ans;
while(cin>>n){
ans=0;
int a,b,c,d;
for(a=9;a>=0;a--)for(b=9;b>=0;b--)for(c=9;c>=0;c--)for(d=9;d>=0;d--){
	if(a+b+c+d==n){ans++;
	}else if(a+b+c+d<n){break;
	}
}
cout<<ans<<endl;
}
return 0;
}