
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2197

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
	
	int N;

	while(cin >> N && N)
	{
		int count=0;
		int total=0;
		REP(i,1,N){
			REP(j,1,N){
				total=0;
				REP(k,0,j){
					total+=i+k;
				}
				if(total == N){count++;}
				total=0;
			}
		}
		cout << count << endl;
	}
	return 0;
}