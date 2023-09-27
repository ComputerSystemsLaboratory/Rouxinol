#include <iostream>
#pragma comment(linker, "/STACK:1024000000,1024000000")
#include <stdio.h>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <string.h>
#include <sstream>
#include <cctype>
#include <climits>
#include <set>
#include <map>
#include <deque>
#include <queue>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stack>
#include <functional>
using namespace std;
const int INF = 0x3f3f3f3f;
const double eps = 1e-8;
const double EULER = 0.577215664901532860;
const double PI = 3.1415926535897932384626;
const double E = 2.71828182845904523536028;
typedef long long LL;
LL pow_mod(LL a,LL b,LL m){
    LL d,t;
    d = 1;
    t = a;
    while (b > 0){
        if (b % 2 == 1)
            d = (d * t) % m;
        b /= 2;
        t = (t * t) % m;
    }
    return d;
}

LL gcd(LL a,LL b){return b == 0 ? a : gcd(b, a % b);}

// ios::sync_with_stdio(false);
// cin.tie(0);
//==============Code starts here================//
char arr[110][110];
int n,m;
int ans;

void dfs(int x, int y, char c){
	if(x < 0 || x >= n || y < 0 || y >= m || arr[x][y] != c){
		return;
	}
	arr[x][y] = '6';
	dfs(x+1,y,c);
	dfs(x-1,y,c);
	dfs(x,y+1,c);
	dfs(x,y-1,c);
	
 }
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(cin >> n >> m && n && m){
        for(int i = 0; i < n; i++){
        	for(int j = 0; j < m; j++){
        		cin >> arr[i][j];
			}
		}
		ans = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(arr[i][j] != '6'){
					ans++;
					dfs(i,j,arr[i][j]);
				}
			}
		}
		cout << ans << endl;
	}

    return 0;
}