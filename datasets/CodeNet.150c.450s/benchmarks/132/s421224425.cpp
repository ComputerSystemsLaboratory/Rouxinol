#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <cassert>
#include <functional>

using namespace std;

#define LOG(...) printf(__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define RSORT(c) sort((c).rbegin(),(c).rend())
#define CLR(a) memset((a), 0 ,sizeof(a))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int dx[] = { -1, 0, 1, 0 }; const int dy[] = { 0, 1, 0, -1 };

int n, p;

int main() {
	while (cin>>n>>p, n|p){
		int wan = p;//椀に石を入れる
		int ans = -1;
		int vl[50] = {0};//町長候補を手ぶらにする
		for (int i = 0; i < 10000000; i++){
			if (wan > 0){//椀に石があるとき
				vl[i%n]++;//手持ちを増やす
				wan--;//椀の石を減らす
				if (vl[i%n] == p){//もし全て持っていたら
					ans = i%n;//町長候補をアンサーに入れる
					break;
				}
			}
			else{//石がないとき
				wan=vl[i%n];//椀に返す
				vl[i%n] = 0;
			}
		}
		cout << ans << endl;
	}
}