#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define INF 100000
using namespace std;

int main(){
	//int town[11][11];
	int to,from,cost;
	int n;
	while(1){
		cin>>n;
		if(!n)break;
		int maxsize=0;
		int dt[11][11];
		for(int i=0;i<11;i++){
			for(int j=0;j<11;j++){
				//town[i][j]=INF;
				if(i!=j)dt[i][j]=INF;
				else dt[i][j]=0;
				//out<<"yeah "<<i<<" "<<j<<endl;
			}
		}
		for(int i=0;i<n;i++){
			cin>>to>>from>>cost;
			//cout<<"analize"<<endl;
			dt[to][from]=cost;
			dt[from][to]=cost;
			maxsize=max(maxsize,to);
			maxsize=max(maxsize,from);
		}
		for(int k=0;k<maxsize+1;k++){
			for(int i=0;i<maxsize+1;i++){
				for(int j=0;j<maxsize+1;j++){
					dt[i][j]=min(dt[i][j],dt[i][k]+dt[k][j]);
				}
			}
		}
		int sum[maxsize+1];
		rep(i,maxsize+1){
			sum[i]=0;
			rep(j,maxsize+1){
				sum[i]+=dt[i][j];
			}
			//cout<<sum[i]<<" ";
		}
		//cout<<endl;
		int ans[maxsize+1];
		rep(i,maxsize+1)ans[i]=sum[i];
		sort(sum,sum+maxsize+1);
		//cout<<sum[0]<<endl;
		for(int i=0;i<maxsize+1;i++){
			if(ans[i]==sum[0]){
				cout<<i<<" "<<sum[0];
				break;
			}
		}
		cout<<endl;
		//cout<<"finish"<<endl;
	}
	return 0;
}