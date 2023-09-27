#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#include <map>
#include <queue>

#define FOR(i, f, n) for(int (i) = (f); (i) < (n); (i)++)
#define RFOR(i, f, n) for(int (i) = (f); (i) >= (n); (i)--)
#define REP(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define RREP(i, n) for(int (i) = (n); (i) >= 0; (i)--)
#define rep(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define rrep(i, n) for(int (i) = (n); (i) >= 0; (i)++)
#define p(...) printf(__VA_ARGS__); cout << endl;
#define input(x) x; cin >> x;
#define list_input(x, n) x[(n)]; for(int (i) = 0; (i) < (n); (i)++) cin >> x[i];
#define lambda(a, b, c) [](const a, const b){ return c ;}
#define key(t, x, compare) [](const t& a, const t& b){ return a x compare b x ;}

using namespace std;

using pii = pair<int, int>;

int main(){
	while(true){
		int N;
		cin >> N;
		if(N == 1){
			cout << 1 << " " << 1 << endl;
		}else{

		int n,d,c;
		if (N == 0){
			break;
		}
		int field[500][500] = {0};
		pair<int, int> arr[200];
		arr[0] = make_pair(200,200);
		field[200][200] = 1;
		for (int i = 1; i < N; ++i){
			cin >> n >> d;
			if (d == 0){
				arr[i] = make_pair(arr[n].first-1, arr[n].second);
			}else if (d == 1){
				arr[i] = make_pair(arr[n].first, arr[n].second+1);
			}else if (d == 2){
				arr[i] = make_pair(arr[n].first+1, arr[n].second);
			}else{
				arr[i] = make_pair(arr[n].first, arr[n].second-1);
			}
			// cout << arr[i].first << " " << arr[i].second << endl;
			field[arr[i].first][arr[i].second] = 1;
		}
		// rep(i, 500){
		// 	rep(j, 500){
		// 		cout << field[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }

		vector<int> r0;
		vector<int> r1;
		rep(i, 500){
			rep(j, 500){
				if(field[i][j]){
					r0.push_back(i);
					r1.push_back(j);
				}
			}
		}
		int minv = 1000;
		int maxv = 0;
		for(int i: r0){
			if(minv > i){
				minv = i;
			}
			if(maxv < i){
				maxv = i;
			}
		}
		int minva = 1000;
		int maxva = 0;
		for(int i: r1){
			if(minva > i){
				minva = i;
			}
			if(maxva < i){
				maxva = i;
			}
		}
		// p("%d %d %d %d", minv, maxv, maxva, minva);

		p("%d %d", maxv - minv + 1, maxva - minva + 1);
	}
	}
}