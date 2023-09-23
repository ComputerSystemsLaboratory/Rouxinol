#include<iostream>

using namespace std;

int data[10][10000];
int dp[1<<10][10000];

int main(){
	int c,r;
	while(cin>>r>>c && r &&c){
		fill((int*)data,(int*)data+10*10000,0);
		fill((int*)dp,(int*)dp+(1<<10)*10000,0);
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>data[i][j];
			}
		}
		
		for(int i=0;i<c;i++){
			if(i>0){
				for(int j=0;j<1<<(r);j++){
					int tmp1=0,tmp2=0;
					for(int k=0;k<r;k++){
						int t=data[k][i];
						if((j&(1<<k))!=0)t++;
						if((t+1)%2==0)tmp2++;
						if(t%2==0)tmp1++;
					}
					
					dp[j][i]=dp[j][i-1]+max(tmp1,tmp2);
				}
			}
			
			else {
				for(int j=0;j<1<<(r);j++){
					dp[j][i]=0;
					int tmp1=0,tmp2=0;
					for(int k=0;k<r;k++){
						int t=data[k][i];
						if((j&(1<<k))!=0)t++;
						if((t+1)%2==0)tmp2++;
						if(t%2==0)tmp1++;
					}
					dp[j][i]=max(tmp1,tmp2);
					
				}
			}
		}
		
		int ans=0;
		for(int i=0;i<1<<(r);i++){
			ans=max(ans,dp[i][c-1]);
		}

		cout<<ans<<endl;
	}
	
	
}