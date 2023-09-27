#define	_USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
using namespace std;
int x,y;
int o[52][52];
queue<int> q;
void tansaku(int j,int i){
	if(j<1||j>x||i<1||i>y||o[i][j]==0||o[i][j]==2){
		return ;
	}
	if(o[i][j]==1){
		if(q.empty())
		q.push(1);
		o[i][j]=2;
	}
	
	tansaku(j+1,i);
	tansaku(j-1,i);
	tansaku(j,i+1);
	tansaku(j,i-1);
	tansaku(j+1,i+1);
	tansaku(j-1,i-1);
	tansaku(j+1,i-1);
	tansaku(j-1,i+1);
}
int main(){

	while(cin>>x>>y,x!=0||y!=0){
		int count=0;
		for(int i=1;i<=y;i++){
			for(int j=1;j<=x;j++){
				cin>>o[i][j];
			}
		}
		for(int i=1;i<=y;i++){
			for(int j=1;j<=x;j++){
				tansaku(j,i);
				if(!q.empty()){
				count+=q.front();
				
				q.pop();
				}
			}
		}
		
		cout<<count<<endl;
	}

}