#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <climits>
#include <tuple>
#include <queue>
#include <cassert>
#include <set>
//#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MT make_tuple
#define el '\n'
 

 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >>n;
	map<string, int> mp;
	string s;
	vector<string> v={"AC", "WA","TLE" ,"RE"};
		for (auto c: v){
		mp[c] = 0;
	}
	while(n--){
		cin >>s;
		mp[s]++;
	}


	for (auto c: v){
		cout << c<<" x "<<mp[c]<<el;
	}
    return 0;
}