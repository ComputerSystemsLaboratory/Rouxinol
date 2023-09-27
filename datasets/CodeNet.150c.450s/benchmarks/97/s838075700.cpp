#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;

const int INF=1<<29;
const double EPS=1e-9;

const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};
int n,d;
int main(){
	while(cin>>n,n){
		int Wh =0;
		int Hh = 0;
		int Wl =1000000;
		int Hl =1000000;
		int x[n];
		int y[n];
		x[0] = 0;
		y[0] = 0;
		for(int i =1;i < n;i++){
			int num;
			cin>>num>>d;
			if(d==0){
				x[i] =x[num] +dx[2];
				y[i] =y[num] +dy[2];
			}else if(d ==1){
				x[i] =x[num] +dx[3];
				y[i] =y[num] +dy[3];
			}else if(d==2){
				x[i] =x[num] +dx[0];
				y[i] =y[num] +dy[0];
			}else if(d==3){
				x[i] =x[num] +dx[1];
				y[i] =y[num] +dy[1];
			}
		}
		for(int i = 0;i < n;i++){
			Wh =max(Wh,x[i]);
			Hh =max(Hh,y[i]);
			Wl =min(Wl,x[i]);
			Hl =min(Hl,y[i]);
		}
		cout <<Wh-Wl+1<<" "<<Hh-Hl+1<<endl;
	}
	return 0;
}