/*
Princess's Marriage
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2019&lang=jp
20:10
*/

#include<iostream>
#include<algorithm>
#include<vector>

using std::cout;
using std::cin;
using std::vector;
using std::pair;
using std::sort;
using std::min;

#define INF 999999999;


long long int N, M;
vector<pair<int, int>> DaP; //(Dn, Pn)
long long int ans;

int main(void){
	cin.tie(0);
	std::ios::sync_with_stdio(false);
	do{
		cin >> N >> M;
		if(N == 0 && M == 0)break;
		for(int i = 0; i < N; i++){
			pair<int, int> inn;
			cin >> inn.first >> inn.second;
			ans += inn.first * inn.second;
			DaP.push_back(inn);
		}
		sort(DaP.begin(), DaP.end(), [](pair<int, int> a, pair<int, int> b){return a.second > b.second;});
		int i = 0;
		while(M > 0){
			long long int minus = min(M, (long long int)DaP[i].first);
			ans -= DaP[i].second * minus;
			M -= minus;
			i++;
			if(i == DaP.size()) break;
		}
		cout << ans << "\n";
		ans = 0;
		DaP.clear();

	} while(true);


	return 0;
}


