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
	
	string c[] = {".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		int cnt = 0;
		string s;
		cin >> s;
		for(int i=0;i<s.size();i++){
			if(s[i] == '0'){
				if(cnt == 0)continue;
				int n = s[i-1]-'1';
				cout << c[n][(cnt-1)%(c[n].size())];
				cnt = 0;
			}else cnt++;
		}
		cout << endl;
	}

}

// command shift d duplicate
// command ctrl 上下
// command D
// command caps G → '' ""
// vector<vector<int>> a(N,vector<int>(M,-1));