#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <cmath>
#include <string>
#define FI first
#define SE second
#define PF push_front
#define PB push_back
#define PPF pop_front
#define PPB pop_back
#define MA make_pair
#define ll long long
#define PA pair<int,int>
#define VE vector<int>
#define VP vector<PA>
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define ROF(i,a,b) for(int i=b-1;i>=a;i--)
#define YES(i) cout<<(i?"YES":"NO")<<endl
#define Yes(i) cout<<(i?"Yes":"No")<<endl
using namespace std;
//
const int INF=1e9+7;
const int mod=1e9+7;
//
struct poi{
	int X;int Y;int Z;
	bool operator<(const poi&R)const{
		return X==R.X ? Y==R.Y ? Z<R.Z : Y<R.Y : X<R.X;
	}
};
/*
ll GCD(ll A,ll B){
  return (B==0)?(A):(GCD(B,A%B));
}
ll LCM(ll A,ll B){
  return A/GCD(A,B)*B;
}
*/
int W,H;
int C[50][50];
void DFS(int x,int y){
	C[x][y]=0;
	FOR(i,-1,2){
		FOR(j,-1,2){
			if(0<=x+i&&x+i<H&&0<=y+j&&y+j<W&&C[x+i][y+j]==1){
				DFS(x+i,y+j);
			}
		}
	}
}
int main(){
	while(1){
		cin>>W>>H;
		if(W==0&&H==0){
			break;
		}
		//
		FOR(i,0,H){
			FOR(j,0,W){
				cin>>C[i][j];
			}
		}
		int ans=0;
		FOR(i,0,H){
			FOR(j,0,W){
				if(C[i][j]==1){
					DFS(i,j);
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
