#include <iostream>
using namespace std;
const int INF = 1e+9;

int main(void){
	int n;
	while(cin>>n,n){
		int g[11][11],v=0;
		for(int i=0;i<11;++i)for(int j=0;j<11;++j) g[i][j]=INF;
		for(int i=0,a,b,c;i<n;++i){
			cin>>a>>b>>c;
			g[a][b]=c;
			g[b][a]=c;
			v = (((a>b)?a:b)>v)?((a>b)?a:b):v;
		}
		int sum_min=INF,d_sum[11]={0};
		for(int i=0;i<=v;++i){
			int d[11];
			for(int j=0;j<=v;++j) d[j]=INF;
			d[i]=0;
			bool f=false;
			for(;;){
				f=false;
				for(int j=0;j<=v;++j){//from
					for(int k=0;k<=v;++k){//to
						if(d[j] != INF && d[k] > d[j] + g[j][k]){
							f = true;
							d[k] = d[j] + g[j][k];
						}
					}
				}
				if(!f) break;
			}
			for(int j=0;j<=v;++j) d_sum[i]+=d[j];
			if(sum_min>d_sum[i]) sum_min = d_sum[i];
		}
		for(int i=0;i<=v;++i){
			if(sum_min==d_sum[i]){
				cout<<i<<" "<<sum_min<<endl;
				break;
			}
		}
	}
}