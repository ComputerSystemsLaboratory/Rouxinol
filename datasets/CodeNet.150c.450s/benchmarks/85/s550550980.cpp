#include <iostream>
#include <cstdio>
#include <map>
#define MAX_NUM 100
#define INFTY 1000000000
#define NIL -1

using namespace std;

//think easy make easy

int n;//num of input


pair<int,int> MatrixChain[MAX_NUM+1];
map<pair<int,int>,int> mapMC;

int calc(int s,int e){//s~eの連鎖行列積の最少計算回数を出力
	int min_time  = INFTY;
	int min_tmp;

	if(mapMC[pair<int,int>(s,e)] != NIL)
		return mapMC[pair<int,int>(s,e)];

	if(s == e){
		return 0;
	}
	for(int i=s;i<e;i++){
		min_tmp = calc(s,i) + calc(i+1,e) 
			+MatrixChain[s].first*MatrixChain[i].second*MatrixChain[e].second;
		if(min_tmp < min_time)
			min_time = min_tmp;
	}
	mapMC[pair<int,int>(s,e)] = min_time;//メモ
	return min_time;
}

int main(){
	scanf("%d",&n);
	int r,c;//row,column

	for(int i=0;i<n;i++){
		scanf("%d %d",&r,&c);
		MatrixChain[i] = pair<int,int>(r,c);//i:1~n-1
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			mapMC[pair<int,int>(i,j)] = NIL;
		}
	}

	cout <<calc(0,n-1) <<endl;

	return 0;
}