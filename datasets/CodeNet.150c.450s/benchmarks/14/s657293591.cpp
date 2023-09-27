#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include <set>
#include <utility>
#include <algorithm>
#include <queue>
#include <stack>
#include <deque>
#include <numeric>
#include <sstream>
#include <list>
#include <map>

#define rep(i,p,n) for(int i=(int)p;i<(int)n;i++)
#define repp(i,p,n) for(int i=(int)p;i>=(int)n;i--)
#define Sort(x) sort(x.begin(),x.end());
#define ll long long 
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvvi <vector<vector<vector<int>>> 
#define vc vector<char> 
#define vvc vector<vector<char>>
#define vvvc vector<vector<vector<char>>> 
#define INF 2000000000

using namespace std;

int main() {
	
	int n;
	bool start = true;
	cin >> n;
	rep(i, 1, n+1) {
		if (i % 3 == 0 ) {
			cout << " " << i;
		}
		else {
			int ii = i;
			while (ii > 0) {
				if (ii % 10 == 3) {
					cout << " " << i;
					break;
				}
				else ii /= 10;
			}
		}
	}

	cout << endl;

	

	


	return 0;
}