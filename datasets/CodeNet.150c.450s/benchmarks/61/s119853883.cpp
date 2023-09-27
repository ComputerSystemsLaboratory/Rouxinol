
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2149

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

int main() {

	int N,A,B,C,X;

	while(cin >> N >> A >> B >> C >> X)
	{

		if(N == 0 && A == 0 && B == 0 && C == 0 && X == 0){ break; }
		
		vector<int> list(N,0);
		rep(i,N){ cin >> list[i]; }

		int frame=0;
		int nth=0;
		int rand=X;
		while(true)
		{
			if(frame > 10000){ frame = -1; break; }
			if(list[nth] == rand){ nth++; }
			if(nth == N){ break; }
			rand = (A * rand + B) % C;
			frame++;
		}

		cout << frame << endl;
	}

	return 0;
}