#include <iostream>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <functional>
#include <cstring>
#include <limits.h>
 
#define FOR(i,k,n)  for (int i=(k); i<(int)(n); ++i)
#define REP(i,n)    FOR(i,0,n)
#define FORIT(i,c)	for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define SZ(i) ((int)i.size())
#define pb          push_back
#define mp          make_pair
#define mt          make_tuple
#define ALL(X)      (X).begin(),(X).end()
typedef long long LL;
 
using namespace std;

#define NMAX 105 
#define WMAX 10005
#define DIAGONAL 1
#define TOP 0

struct Item{
	int value, weight;
};

int N, W;
Item items[NMAX + 1];
int C[NMAX + 1][WMAX + 1], G[NMAX + 1][WMAX + 1];

void compute(int &maxValue, vector<int> &selection){
	FOR(w,0,W+1){
		C[0][w] = 0;
		G[0][w] = DIAGONAL;
	}

	FOR(i,1,N+1){
		C[i][0] = 0;
	}

	FOR(i,1,N+1){
		FOR(w,1,W+1){
			C[i][w] = C[i-1][w];
			G[i][w] = TOP;
			if (items[i].weight > w) continue;
			if (items[i].value + C[i-1][w - items[i].weight] > C[i-1][w]){
				C[i][w] = items[i].value + C[i-1][w - items[i].weight];
				G[i][w] = DIAGONAL;
			}
		}
	}

	maxValue = C[N][W];
	selection.clear();
	for (int i=N, w=W; i>=1; i--){
		if(G[i][w] == DIAGONAL){
			selection.push_back(i);
			w -= items[i].weight;
		}
	}

	reverse(selection.begin(), selection.end());


}




void input(){
	cin >> N >> W;
	FOR(i,1,N+1){
		cin >> items[i].value >> items[i].weight;
	}
}

int main(){
	int maxValue;
	vector<int> selection;
	input();
	compute(maxValue, selection);

	cout << maxValue << endl;

	return 0;

}