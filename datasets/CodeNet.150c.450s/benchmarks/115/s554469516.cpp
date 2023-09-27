#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>

#define MAX_LENGTH 1000
#define NIL -1
using namespace std;
//think easy make easy

int q;//num of datasets
string X;
string Y;
int map[MAX_LENGTH+1][MAX_LENGTH+1];

int findMaxLength(int x,int y){//x:Xの終端.y:Yの終端(0オリジン)
	int val;

	if(x < 0 || y < 0) return 0;

	if(map[x][y] == NIL){
		if(X.at(x) == Y.at(y)){
			val = findMaxLength(x-1,y-1) +1;
		}else{
			val = max(findMaxLength(x-1,y),findMaxLength(x,y-1));
		}
		map[x][y] = val;//メモ
		return val;
	}else return map[x][y];
}

int main(){
	
	scanf("%d",&q);

	for(int i=0;i<q;i++){
		cin >>X; cin >> Y;
		for(int i=0;i<X.size();i++){
			for(int j=0;j<Y.size();j++){
				map[i][j] = NIL;
			}
		}
	
		cout <<findMaxLength(X.size()-1,Y.size()-1) <<endl;
	}

	return 0;
}