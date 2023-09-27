/*
 *	
 *	Created by Ziyi Tang
 *
 */

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <bitset>
using namespace std;
#define INF 1E18
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef vector<vpi> vvpi;
const int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

map<string,int> freq;
string maxletter1;
int maxletter2 = 0;

bool comp(pair<string,int> a, pair<string,int> b){
	if (a.second > b.second){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	string tmp;
	//cin >> tmp;
	while (cin >> tmp){
		int sz = tmp.size();
		if (sz > maxletter2){
			maxletter1 = tmp;
			maxletter2 = sz;
		}
		freq[tmp] += 1;
		
	}
	auto maxfreq = min_element(freq.begin(), freq.end(), comp);
	cout << (*maxfreq).first << " " << maxletter1 << endl;

	

	return 0;
}