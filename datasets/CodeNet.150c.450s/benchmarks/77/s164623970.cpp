#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<string>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<cmath>
#include<queue>
#include<cstring>
using namespace std;

const int dy[4]={1,0,-1,0},dx[4]={0,1,0,-1};

int main(){
	int N;
	while(cin>>N,N){
		int X,Y;
		bool fld[21][21]={};
		for(int i=0;i<N;i++){
			cin>>X>>Y;
			fld[Y][X] = true;
		}
		int M,L,direct,y=10,x=10,cnt=0;
		char D;
		cin>>M;
		for(int i=0;i<M;i++){
			cin>>D; cin>>L;
			if(D=='N') direct = 0;
			else if(D=='E') direct = 1;
			else if(D=='S') direct = 2;
			else if(D=='W') direct = 3;
			for(int j=0;j<L;j++){
				y += dy[direct]; x += dx[direct];
				if(fld[y][x]==true){
					fld[y][x] = false;
					cnt++;
				}
			}
		}
		if(cnt==N) puts("Yes");
		else puts("No");
	}
	return 0;
}