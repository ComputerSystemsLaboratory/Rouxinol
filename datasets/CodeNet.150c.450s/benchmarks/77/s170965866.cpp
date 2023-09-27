#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdio>
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
 
using namespace std;
 
#define LOG(...) printf(__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
 
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

bool field[21][21];
 
int main() {
	int ju_n,order_n;
	int x,y;
	while(cin >> ju_n, ju_n){
		fill_n((bool*)field, 21*21, false);
		REP(i, ju_n){
			cin >> x >> y;
			field[y][x]=true;
		}
		x=10;y=10;
		cin >> order_n;
		REP(i, order_n){
			char order;
			int l;
			cin >> order >> l;
			int dx=0,dy=0;
			switch(order){
				case 'N':
					dy=1;
					break;
				case 'S':
					dy=-1;
					break;
				case 'W':
					dx=-1;
					break;
				case 'E':
					dx=1;
					break;
			}
			REP(i, l){
				x+=dx;y+=dy;
				if(field[y][x]){
					ju_n--;
					field[y][x]=false;
				}
			}
		}
		cout << (ju_n==0?"Yes":"No") << endl;
	}
}