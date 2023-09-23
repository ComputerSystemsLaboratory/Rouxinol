#include<iostream>
#include<algorithm>
using namespace std;

int a[10000][10];
int main(){
	int r,c;
	while(cin>>r>>c,r|c){
		int n,ans=0;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>a[j][i];
			}
		}
		for(int i=0;i<(1<<r);i++){
			n=0;
			for(int j=0;j<c;j++){
				int s=0;
				for(int k=0;k<r;k++)
					s += a[j][k]^(1&i>>k);
				n += max(s,r-s);
			}
			ans = max(ans,n);
		}
		cout<<ans<<endl;
	}
	return 0;
}