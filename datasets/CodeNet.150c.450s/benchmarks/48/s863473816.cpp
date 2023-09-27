#include<iostream>

using namespace std;

const int INF=10000003;

int main(){
	
	int e;
	while(cin>>e && e){
		int ans=INF;
		for(int i=0;i*i*i<=e;i++){
			int tmp=e-i*i*i;
			for(int j=0;j*j<=tmp;j++)ans=min(ans,i+tmp-j*j+j);
		}
	cout<<ans<<endl;
	}
}