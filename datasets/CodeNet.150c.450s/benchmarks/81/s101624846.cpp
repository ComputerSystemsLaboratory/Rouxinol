#include <iostream>
using namespace std;
#define MAX(x,y) (x>y?x:y)
#define MIN(x,y) (x>y?y:x)
#define INF 1000000
typedef long long ll;

ll cost[15][15];

int main()
{
	int n,max,num;
	ll sum,min;
	
	while(cin>>n,n){
		num=0;
		min=INF;
		max=0;
		
		for(int i=0;i<15;i++){
			for(int j=0;j<15;j++){
				cost[i][j]=(i==j?0:INF);
			}
		}
		
		for(int i=0;i<n;++i){
			int a,b;
			ll c;
			cin>>a>>b>>c;
			cost[a][b]=c;
			cost[b][a]=c;
			if(max<MAX(a,b))max=MAX(a,b);

		}
		
		for(int k=0;k<=max;k++){
			for(int i=0;i<=max;i++){
				for(int j=0;j<=max;j++){
					cost[i][j]=MIN(cost[i][j],cost[i][k]+cost[k][j]);
				}
			}
		}
		
		for(int i=0;i<=max;i++){
			sum=0;
			for(int j=0;j<=max;j++){
				sum+=cost[i][j];
			}
			if(min>sum){
				min=sum;
				num=i;
			}	
		}
		cout<<num<<" "<<min<<endl;
	}
	return 0;
}