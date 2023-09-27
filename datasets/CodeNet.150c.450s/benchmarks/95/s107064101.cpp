#include<iostream>
#include <list>
#include<stack>
#include<queue>
#include <vector>
#include <set>
#include<algorithm>
#include<math.h>
#include<stdlib.h>
#include<string>
#include <functional>
#include<fstream>

#define FOR(k,m,n) for(int (k)=(m);(k)<(n);(k)++)
#define REP(i,n) FOR((i),0,(n))
#define LL long long
#define CLR(a) memset((a),0,sizeof(a))
#define SZ(x) (int((x).size()))
#define WAITING(str) int str;std::cin>>str;
#define DEBUGING(str) cout<<str<<endl
using namespace std;

const LL MOD = 1000000007;// 10^9+7
const int INF = (1 << 30);



//計算
void calc(const vector<string> f)
{
	//variable
	int res = 0;
	bool bodyFloor = true;
	pair<bool, bool> footFloor = { true,true };
	
	//calc
	for (auto s : f) {
		bool left = (s[0] == 'l');
		bool floor = (s[1] == 'd');
		//move
		if (left) {
			footFloor.first = floor;
		}
		else {
			footFloor.second = floor;
		}
		//count
		if (bodyFloor != footFloor.first&&
			bodyFloor != footFloor.second) {
			res++;
			bodyFloor = footFloor.first;
		}
	}


	//output
	cout << res << endl;
}


//デバッグ
void debug()
{
	int N;
	cin>>N;
}


//メイン関数
int main()
{
	while (true) {
		int n;
		vector<string> f;
		cin >> n;
		if (n == 0)break;
		f.resize(n);
		REP(i, n)cin >> f[i];
		calc(f);
	}
	debug();
	
	return 0;
}

