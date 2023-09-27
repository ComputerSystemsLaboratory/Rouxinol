
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2013

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

int main()
{
	int N;
	while(cin >> N && N)
	{
		vector< pair<int,int> > train( N, {0,0} );
	
		int hh,mm,ss;
		rep(nth,N)
		{
			scanf("%d:%d:%d",&hh,&mm,&ss);
			train[nth].first = (hh*10000) + (mm*100) + (ss);

			scanf("%d:%d:%d",&hh,&mm,&ss);
			train[nth].second = (hh*10000) + (mm*100) + (ss);
		}

		vector<int> route(240000,0);
		rep(i,train.size()){
			REP(j,train[i].first, train[i].second){
				route[j] += 1;
			}
		}

		cout << *max_element(ALL(route)) << endl;

}
	return 0;
}