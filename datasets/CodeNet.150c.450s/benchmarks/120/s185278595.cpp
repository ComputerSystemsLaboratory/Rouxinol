#include<iostream>
#include<algorithm>
using namespace std;
int x[10][10000],H,W;
int main(){
	while(true){
		cin>>H>>W;if(H+W==0)break;
		for(int i=0;i<H;i++){for(int j=0;j<W;j++)cin>>x[i][j];}
		int maxn=0;
		for(int i=0;i<(1<<H);i++){
			int cnt=0;
			for(int j=0;j<W;j++){
				int r=0;
				for(int k=0;k<H;k++){
					int Y=(i/(1<<k))%2;r+=(x[k][j]+Y)%2;
				}
				cnt+=max(r,H-r);
			}
			maxn=max(maxn,cnt);
		}
		cout<<maxn<<endl;
	}
	return 0;
}