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
int x;//現在の乱数
int nx;//次の乱数
int A,B,C;//定数
int n;
int y;//条件
int step;
int ans;
int main(){
	while(cin>>n>>A>>B>>C>>x){
		if(n==0&&n==A&&A==B&&B==C&&C==x)
			break;
		step = 0;
		ans = -1;
		for(int i = 0;i <n;i++){
			cin>>y;
			while(1){
				if(step>10000){
					ans = -1;
					break;
				}
				if(x==y&&ans!=step){
					ans = step;
					break;
				}
				nx =(A*x+B)%C;
				//cout <<x<<endl;
				x= nx;
				step++;
			}
		}
		cout <<ans<<endl;
	}
	return 0;
}