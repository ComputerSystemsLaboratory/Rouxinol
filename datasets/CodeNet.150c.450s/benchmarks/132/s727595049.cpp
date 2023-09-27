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
int main(){
	int N,P;
	while(1){
		cin>>N>>P;
		if(N==0&&P==0){
			break;
		}
		int M=P;
		//
		int A[50];
		fill(A,A+N,0);
		int now=0;
		while(1){
			if(P>0){
				P--;
				A[now]++;
				if(A[now]==M){
					cout<<now<<endl;
					break;
				}
				now++;
			}else{
				P=A[now];
				A[now]=0;
				now++;
			}
			if(now==N){
				now=0;
			}
		}
	}
	return 0;
}
