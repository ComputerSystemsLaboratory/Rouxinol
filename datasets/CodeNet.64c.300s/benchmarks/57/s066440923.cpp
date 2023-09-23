#include <bits/stdc++.h>
using namespace std;
int main(){
	int r,c;
	while(1){
		cin>>r>>c;
		if(r==0)	return 0;
		int senbei[r][c];
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++)	cin>>senbei[i][j];
		}
		int ans=0;
		bool temp[r][c];
		for(int t=0;t<(1<<r);t++){
			for(int i=0;i<r;i++){
				for(int j=0;j<c;j++){
					temp[i][j]=senbei[i][j];
				}
			}
			for(int i=0;i<r;i++){
				if((t>>i)%2==1){
					for(int j=0;j<c;j++)	temp[i][j]^=1;
				}
			}
			int cnt=0;
			for(int i=0;i<c;i++){
				int omote=0,ura=0;
				for(int j=0;j<r;j++){
					if(temp[j][i])	omote++;
					else 	ura++;
				}
				cnt+=max(omote,ura);
			}
			ans=max(ans,cnt);
		}
		cout<<ans<<endl;
	}
}