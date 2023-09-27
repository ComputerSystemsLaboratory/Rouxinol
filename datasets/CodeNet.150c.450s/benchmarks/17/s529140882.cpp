#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(x=from;x<to;x++)

using namespace std;


int main(void){

vector< int > su(5);

	rep(i,5) cin >> su[i];
	sort(su.begin(), su.end(), greater<int>());
	rep(i,5) cout << su[i] << (i<4 ? " ":"\n");

	
	return 0;
}