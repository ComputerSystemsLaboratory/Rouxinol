#include<iostream>
#include<algorithm>

using namespace std;

#define RMAX 10
#define CMAX 10000

int main(){

	int R,C;
	int osenbei[RMAX][CMAX],tmposen[RMAX][CMAX];
	int ans;
	int cnt;
	int sum;

	while(1){
		cin>>R>>C;
		if(R==0&&C==0) break;
		ans=-1;
		for(int i=0;i<R;i++){
			for(int j=0;j<C;j++){
				cin>>osenbei[i][j];
			}
		}
		for(int i=0;i<(1<<R);i++){
			for(int j=0;j<R;j++){
				for(int k=0;k<C;k++){
					tmposen[j][k]=osenbei[j][k];
				}
			}
			for(int j=0;j<R;j++){
				if(((i>>j)&1)==1){
					for(int k=0;k<C;k++){
						if(tmposen[j][k]==1) tmposen[j][k]=0;
						else tmposen[j][k]=1;
					}
				}
			}
			sum=0;
			for(int j=0;j<C;j++){
				cnt=0;
				for(int k=0;k<R;k++){
					if(tmposen[k][j]==0)  cnt++;
				}
				sum+=max(cnt,R-cnt);
			}
			if(ans<sum) ans=sum;
		}
		cout<<ans<<endl;
	}

	return 0;
}