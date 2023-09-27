#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int x,y,s;
	while(cin>>x>>y>>s,x+y+s!=0){
		int ans=0;
		for(int i=1;i<=s;i++){
			for(int j=1;j<=s;j++){
				int a=i*(100+x)/100,b=j*(100+x)/100;
				if(a+b==s){
					ans=max(ans,i*(100+y)/100+j*(100+y)/100);
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}