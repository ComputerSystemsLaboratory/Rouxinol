#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	int x,y,s;
	while(cin>>x>>y>>s,x|y|s){
		int ans=-1;
		for(int i=1;i<s;i++){
			for(int j=1;j<s;j++){
				if(i*(100+x)/100+j*(100+x)/100!=s)continue;
				ans=max(ans,i*(100+y)/100+j*(100+y)/100);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}