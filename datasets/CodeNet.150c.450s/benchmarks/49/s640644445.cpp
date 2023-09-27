
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1147&lang=jp

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
		vector<int> score(N,0);
		rep(i, N){
			cin >> score[i];
		}

		int max_s = *max_element(ALL(score));
		int min_s = *min_element(ALL(score));

		//dump(max_s); dump(min_s);

		rep(i,N){if(score[i]==max_s){score.erase(score.begin()+i);break;}}
		rep(i,N){if(score[i]==min_s){score.erase(score.begin()+i);break;}}
	
		//DUMP(score);

		int ave = accumulate(ALL(score),0) / score.size();
		
		cout << ave << endl;
	}

	return 0;
}