#include <iostream>
using namespace std;
int C,R,ans;
int sen[10][10000];
int solve(int i){
	int res=0;
	int tmp[10][10000]={};
	for(int j=0;j<C;j++){
		if(i>>j&1)
			for(int k=0;k<R;k++)tmp[j][k]++;
	}
	for(int j=0;j<R;j++){
		int a=0;
		for(int k=0;k<C;k++){
			a+=(sen[k][j]+tmp[k][j])%2;
		}
		res+=min(a,C-a);
	}
	return C*R-res;
}
int main()
{
	while(true){
		cin>>C>>R;
		if(!C&&!R)break;
		for(int i=0;i<C;i++)for(int j=0;j<R;j++)cin>>sen[i][j];
		for(int i=0;i<1<<C;i++)ans=max(ans,solve(i));
		cout<<ans<<endl;
		ans=0;
	}
    return 0;
}