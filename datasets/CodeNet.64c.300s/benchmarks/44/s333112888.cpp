#include<iostream>
#include<algorithm>
using namespace std;
#define INF (1<<29)

int main(){
	int m,n;//町,道
	int d[10][10];
	while(cin>>n,n){
		fill_n((int*)d,10*10,INF);
		m=0;
		for(int i=0;i<n;i++){
			int a,b,c;
			cin>>a>>b>>c;
			m=max(m,max(a,b)+1);
			d[a][b]=d[b][a]=c;
		}
		for(int i=0;i<m;i++){
			d[i][i]=0;
		}
		for(int k=0;k<m;k++)
			for(int i=0;i<m;i++)
				for(int j=0;j<m;j++)
					d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
		int a=0,b=INF;
		for(int i=0;i<m;i++){
			int sum=0;
			for(int j=0;j<m;j++)sum += d[i][j];
			if(sum<b){
				a=i;
				b=sum;
			}
		}
		cout<<a<<' '<<b<<endl;
	}
}