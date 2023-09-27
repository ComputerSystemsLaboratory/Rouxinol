
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1153&lang=jp

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
	int N,M;

	while(cin >> N >> M && N && M)
	{
		vector<int> tarou(N,0);
		vector<int> hanako(M,0);

		rep(i,N){ cin >> tarou[i]; }
		rep(i,M){ cin >> hanako[i]; }

		pair<int, int> ans = make_pair(150,150);
		
		rep(i,N)
		{
			rep(j,M)
			{
				swap(tarou[i],hanako[j]);
				if(accumulate(ALL(tarou),0) == accumulate(ALL(hanako),0))
				{
					if((ans.first+ans.second) > (tarou[i]+hanako[j])){
						ans = make_pair(hanako[j], tarou[i]);	
					}
				}
				swap(tarou[i],hanako[j]);
			}
		}

		if(ans.first == 150 && ans.second == 150){
			cout << -1 << endl;
		}else{
			cout << ans.first << " " << ans.second << endl;
		}
	}
	return 0;
}