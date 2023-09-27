//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <cstring>
#include <climits>
#include <queue>
#include <algorithm>
#include <utility>
#define INF INT_MAX / 2
using namespace std;

typedef pair<int, int> P;
typedef long long ll;

int main(void) {
	int n,m;
	while(cin >> n >> m,n+m!=0){
	vector<int> s1(n),s2(m);
	int sum1,sum2;
	sum1 = sum2 = 0;
	for(int i=0;i<n;i++){
		cin >> s1[i];
		sum1 += s1[i];
	}
	for(int i=0;i<m;i++){
		cin >> s2[i];
		sum2 += s2[i];
	}
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	bool f = false;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(sum1-s1[i]+s2[j] == sum2-s2[j]+s1[i] && !f){
				cout << s1[i] << " " << s2[j] << endl;
				f = true;

			}
		}
	}
	if(!f)cout << -1 << endl;
}

}

// command shift d duplicate
// command ctrl 上下
// command D
// command caps G → '' ""
// vector<vector<int>> a(N,vector<int>(M,-1));