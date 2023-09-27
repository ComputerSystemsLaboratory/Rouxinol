#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <vector>
#include <functional>
using namespace std;
#define INF 1e+9
int dat[50][50]={};
int a,b,c;
int main(){
	int N;
	int v;
	while(1){
		v=0;
		cin>>N;
		if(N==0){
			break;
		}
	for(int i=0;i<50;i++){
            for(int j=0;j<50;j++){
                if(i==j){
			dat[i][j]=0;
		}
                else{
			dat[i][j]=INF;
		}
            }
        }
	for(int i=0;i<N;i++){
		cin>>a>>b>>c;
		dat[a][b]=c;
		dat[b][a]=c;
		v=max(max(v,a),b);
	}
	for(int k=0;k<=v;k++){
		for(int i=0;i<=v;i++){
			for(int j=0;j<=v;j++){
				dat[i][j]=min(dat[i][j],dat[i][k]+dat[k][j]);
			}
		}
	}
	int ans=INF,ansp;
	for(int i=0;i<=v;i++){
		int cnt=0;
		for(int j=0;j<=v;j++){
			cnt+=dat[i][j];
		}
		if(ans>cnt){
			ans=cnt;
			ansp=i;
		}
	}
	cout<<ansp<<" "<<ans<<endl;
	}
	return 0;
}