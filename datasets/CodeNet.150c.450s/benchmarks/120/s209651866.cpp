#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>
#include <bitset>
#define INF	100000000
#define pb	push_back
using namespace std;
typedef pair<int, int> P;
typedef long long int	ll;

int main(){
	int n, m;
	while(cin >> n >> m){
		int ans = 0;
		if(n == 0 && m == 0) break;
		bool a[10][10000], b[10][10000];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 0; i < pow(2,n); i++){
			for(int j = 0; j < n; j++){
				for(int k = 0; k < m; k++){
					b[j][k] = a[j][k];
				}
			}
			bitset<10> bs(i);
			int kari = 0;
			for(int j = 0; j < n; j++){
				if(bs[j] == true){
					for(int k = 0; k < m; k++){
						if(a[j][k] == true) b[j][k] = false;
						else b[j][k] = true;
					}
				}
			}
			for(int j = 0; j < m; j++){
				int x = 0;
				int t = 0;
				for(int k = 0; k < n; k++){
					x += b[k][j];
				}
				if(x > n/2) kari += x;
				else kari += n-x;
			}
			if(ans < kari) ans = kari;
		}
		cout << ans << endl;
	}
}