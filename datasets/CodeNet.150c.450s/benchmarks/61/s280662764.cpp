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
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>

#define MP make_pair
#define PB push_back
#define ALL(x) (x).begin(),(x).end()
#define REP(i,n) for(int i=0;i<(n);i++)
#define REP1(i,n) for(int i=1;i<(n);i++)
#define REP2(i,d,n) for(int i=(d);i<(n);i++)
#define RREP(i,n) for(int i=(n);i>=0;i--)
#define CLR(a)      memset((a),0,sizeof(a))
#define MCLR(a)     memset((a),-1,sizeof(a))
#define RANGE(x,y,maxX,maxY) (0 <= (x) && 0 <= (y) && (x) < (maxX) && (y) < (maxY))

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<VI > VVI;
typedef vector<string> VS;
typedef vector<LL> VLL;
typedef pair<int,int> PII;

const int INF = 0x3f3f3f3f;
const LL INFL = 0x3f3f3f3f3f3f3f3fLL;
const double EPS = 1e-9;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

int main()
{
	int n,a,b,c,x,cnt=0,ans;
	int y[10000];
	while(1){
		cin >> n >> a >> b  >> c  >> x;
		if(n==0 && a==0 && b==0 && c==0 && x==0){
			return 0;
		}
		for(int i=0;i<n;i++){
			cin >> y[i];
			while(cnt<=10000){
				if(i==0 && y[i]==x){
					break;
				}
				ans=(a*x+b)%c;
				cnt++;
				if(ans==y[i]){
					x=ans;
					break;
				}
				x=ans;
			}
		}
		if(cnt>10000)
			cout << -1 << endl;
		else
			cout << cnt << endl;
		cnt=0;
		ans=0;
	}
	return 0;
}