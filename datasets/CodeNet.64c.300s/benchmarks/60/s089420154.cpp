#include <iostream>
using namespace std;
#define AMAX 17
int a,b,n;
int r[AMAX][AMAX];
void solve(){
	for(int i=1;i<=b;i++){
		for(int j=1;j<=a;j++){
			if(r[i][j]==-1)continue;
			if(r[i-1][j]!=-1)r[i][j]+=r[i-1][j];
			if(r[i][j-1]!=-1)r[i][j]+=r[i][j-1];
		}
	}
	cout<<r[b][a]<<endl;
}
int main(){
	while(cin>>a>>b,a||b){
		for(int i=0;i<AMAX;i++)fill(r[i],r[i]+AMAX,0);
		r[1][1]=1;		
		cin>>n;
		int x,y;
		for(;n>0;--n){
			cin>>x>>y;
			r[y][x]=-1;
		}
		solve();
	}
	return 0;
}