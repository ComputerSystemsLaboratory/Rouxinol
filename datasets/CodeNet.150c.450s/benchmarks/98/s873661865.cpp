#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <numeric>
#include <map>
#include <vector>
#include <string>
#include <vector>
#include <cassert>
#include <cmath>
#include <stack>
#include <cctype>
#include <queue>
#include <algorithm>
#include <memory>
#include <memory.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
typedef pair<int, P> PP;
const int INF = 1 << 30;
const double EPS = 1e-10;
const double PI = 3.14159;

int h[101];
int t[101];

int main(){
	int n, m;
	while(cin >> n >> m && (n || m)){
		int sumh = 0, sumt = 0;
		for(int i = 0; i < n; i++){
			cin >> h[i];
			sumh += h[i];
		}
		for(int i = 0; i < m; i++){
			cin >> t[i];
			sumt += t[i];
		}
		int res = INF;
		int resh = 0;
		int rest = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(sumh - h[i] + t[j] == sumt - t[j] + h[i]){
					if(h[i] + t[j] < res){
						res = t[j] + h[i];
						resh = h[i];
						rest = t[j];
					}
				}
			}
		}
		if(res == INF) cout << -1 << endl;
		else cout << resh << " " << rest << endl;
	}
	return 0;
}