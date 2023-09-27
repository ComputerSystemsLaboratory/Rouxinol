
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1129&lang=jp

#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;

using namespace std;

vector<int> cut(vector<int> yama, int p, int c)
{
	int n = yama.size();
	vector<int> tmp;

	rep(i,c){
		int index = n-p;
		tmp.push_back(yama[index-i]);
	}

	reverse(ALL(tmp));

	rep(i,c){
		int index = n-p-i;	
		yama.erase(yama.begin()+index);
	}

	yama.insert(yama.end(),ALL(tmp));

	return yama;
}

int main() {
	int N,R;

	while(cin >> N >> R && N && R)
	{
		vector<int> yama;
		REP(i,1,N+1){ yama.push_back(i); }

		int P,C;
		rep(i,R)
		{
			cin >> P >> C;
			yama = cut(yama, P, C);
		}
		cout << yama[yama.size()-1] << endl;
	}
	return 0;
}