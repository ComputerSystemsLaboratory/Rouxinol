#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <queue>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>
#include <climits>
//#include "h.h"
using namespace std;

#define ll long long
#define pint pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
#define pm(first, second) pb(mp(first, second))
#define SPACE " "
#define fpf first.first
#define fps first.second
#define spf second.first
#define sps second.second

#define all(X) (X).begin(), (X).end()

int main(){

	while(true){
		int W, H;
		cin >> W >> H;
		if(W == 0 && H == 0)break;
		vector<string> S(H);
		queue<pair<int, int>> Q;
		for(int i = 0; i < H; i ++){
			cin >> S[i];
			for(int j = 0; j < W; j ++){
				if(S[i][j] == '@')Q.push(mp(i, j));
			}
		}
		pair<int, int> P;
		while(!Q.empty()){
			P = Q.front();
			Q.pop();
			S[P.first][P.second] = '@';
			if(P.first > 0 && S[P.first - 1][P.second] == '.')Q.push(mp(P.first - 1, P.second));
			if(P.first < H - 1 && S[P.first + 1][P.second] == '.')Q.push(mp(P.first + 1, P.second));
			if(P.second > 0 && S[P.first][P.second - 1] == '.')Q.push(mp(P.first, P.second - 1));
			if(P.second < W - 1 && S[P.first][P.second + 1] == '.')Q.push(mp(P.first, P.second + 1));
		}
		int ans = 0;
		for(int i = 0; i < H; i ++){
			for(int j = 0; j < W; j ++){
				if(S[i][j] == '@')ans ++;
			}
		}
		cout << ans << endl;
	}

	return 0;
}
