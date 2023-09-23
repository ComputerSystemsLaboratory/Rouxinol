#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <cstdio>
#include <cmath>

using namespace std;

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define EPS 1e-14

#define all(v) v.begin(),v.end()
#define INF 1<<30
#define mp make_pair
#define pb push_back

#define fi first
#define se second

#define each(it,c) for(auto it=(c).begin();it!=(c).end();it++)

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

typedef long long ll;

#define MA 196471
#define BY 200
#define NY 195
#define SetY 590
#define BM 20 
#define SM 19
#define SetM 39

int main(){
	int n;
	cin>>n;

	rep(i,n){
		int Y,M,D;
		cin>>Y>>M>>D;
		int aY,aM,aD;
		aY = Y-1;
		aM = M-1;
		aD = D;
		int alive = 0;
		int maY;
		maY = aY%3;
		alive += D;//D
		alive += SetY*(aY/3);//Y
		alive += maY*NY;
		if(Y%3==0){//M
			alive+=BM*aM;
		}else{
			alive+=SetM*(aM/2);
			if(aM%2==1){
				alive+=BM;
			}
		}
		cout<<MA-alive<<endl;
	}
	
	return 0;
}