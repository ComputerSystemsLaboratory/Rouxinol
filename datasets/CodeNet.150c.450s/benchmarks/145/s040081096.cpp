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

int main(){
	int cnt1=0,cnt2=0,tmp=0,anss1=0,anss2=0;
	string str,ans1,ans2,a;
	vector<string> v;

	getline(cin,str);
	for(int i=0;i<str.size()+1;i++){
		if(str[i]==' ' || i==str.size()){
			a=str.substr(tmp,i-tmp);
			v.push_back(a);
			tmp=i+1;
			cnt1++;
		}
	}
	for(int i=0;i<cnt1;i++){
		for(int j=0;j<cnt1;j++){
			if(v[i]==v[j]){
				cnt2++;
			}
		}
		if(anss1<cnt2){
			anss1=cnt2;
			ans1=v[i];
		}
		if(anss2<v[i].length()){
			anss2=v[i].length();
			ans2=v[i];
		}
		cnt2=0;
	}
	cout << ans1 << ' ' << ans2 << endl;
	return 0;
}