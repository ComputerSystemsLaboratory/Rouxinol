#include <iostream>
#include <vector>
#include <numeric>
#include <climits>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm> 

/*
	メモ
	#inlucde <string>
	memset(配列,初期化値,sizeof(配列));//配列初期化

	#include <queue>
	push(),back(),front()
	pop()//最初の要素削除

	#inclue <stack>
	pop(),push(),top(),empty()

	__builtin_popcount(unsigned int);

*/

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{"; for(auto nth : list){ cout << nth << " ";}cout << "}" << endl;

using namespace std;

int main() {

	while(1){
		int n;
		cin >> n;
		
		if(n==0) break;

		vector<int> list;
		rep(i,n){
			int tmp;
			cin >> tmp;
			list.push_back(tmp);	
		}
		sort(list.begin(),list.end());
		
		int ans=0;
		for(int k=1;k<list.size()-1;k++){
			ans+=list[k];
		}
		cout << ans/(list.size()-2) << endl;
	}
}