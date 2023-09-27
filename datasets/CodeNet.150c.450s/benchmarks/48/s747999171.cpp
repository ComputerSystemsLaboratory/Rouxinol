#include<iostream>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	int e,ans;
	while(scanf("%d",&e),e){
		ans=e;
		int x;
		double d=sqrt(e)+1,g=pow(e,(double)1/3)+1;
		rep(y,d){
			rep(z,g){
				x=e-y*y-z*z*z;
				if(x<0)continue;
				ans=min(ans,x+y+z);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}