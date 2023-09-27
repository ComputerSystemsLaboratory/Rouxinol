#include<iostream>
#include<algorithm>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	int m,na,ni,ans;
	while(cin>>m>>ni>>na,(m||ni)||na){
		int p[m];
		rep(i,m)cin>>p[i];
		sort(p,p+m);
		int gap=0;
		loop(i,ni,na+1){
			if(gap<=p[m-i]-p[m-i-1]){
				ans=i;
				gap=p[m-i]-p[m-i-1];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}