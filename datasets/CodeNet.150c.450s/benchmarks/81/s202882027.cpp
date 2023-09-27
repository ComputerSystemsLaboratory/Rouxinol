#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
int cost[12][12];
int n,a,b,c;
int s,min_cost;


int main(){
	
	while(scanf("%d",&n),n!=0){
		memset(cost,255,sizeof(cost));
		for(int i=0;i<n;i++){
			scanf("%d %d %d",&a,&b,&c);
			cost[a][b]= (cost[a][b]==-1) ? c : min(cost[a][b],c);
			cost[b][a]=cost[a][b];
		}
		for(int i=0;i<=10;i++)
			cost[i][i]=0;
		for(int k=0;k<=10;k++)
			for(int i=0;i<=10;i++)
				for(int j=0;j<=10;j++)
					if(cost[i][k]!=-1&&cost[k][j]!=-1){
						cost[i][j]= (cost[i][j]==-1) ? cost[i][k]+cost[k][j] : min(cost[i][j],cost[i][k]+cost[k][j]);
						cost[j][i]=cost[i][j];
					}
		s=-1;min_cost=-1;
		for(int i=0;i<=10;i++){
			int temp=0;
			for(int j=0;j<=10;j++)
				temp= (cost[i][j]==-1) ? temp : temp+cost[i][j];
			if(s==-1||temp<min_cost&&temp>0){
				min_cost=temp;
				s=i;
			}
		}
		printf("%d %d\n",s,min_cost);
	}
	return 0;
}
