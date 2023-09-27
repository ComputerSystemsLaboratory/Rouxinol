#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
	int N,W;
	cin >> N >> W ;
	vector<int> value(N);
	vector<int> weight(N);
	for (int i=0;i<N;i++){
		cin >> value[i] >> weight[i];
	}
	
	int table[W+1][N];
	for (int i=0;i<W+1;i++){
		if(i==0){
			table[i][0]=0;
		}else if(i==weight[0]){
			table[i][0]=value[0];
		}else{
			table[i][0]=-1;
		}
	}
	for (int j=1;j<N;j++){
		table[0][j]=0;
		for (int i=1;i<W+1;i++){
			if(i-weight[j]<0){
				table[i][j]=table[i][j-1];
				continue;
			}
			if(table[i-weight[j]][j]==-1){
				table[i][j]=table[i][j-1];
			}else{
				table[i][j]=max(table[i][j-1],table[i-weight[j]][j-1]+value[j]);
			}
		}
	}
	
	int res=0;
	for (int i=0;i<W+1;i++){
		if(res<table[i][N-1]){
			res=table[i][N-1];
		}
	}
	cout << res <<endl;
	return 0;
}