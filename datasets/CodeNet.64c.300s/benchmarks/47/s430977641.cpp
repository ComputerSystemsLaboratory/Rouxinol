#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cmath>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(x=from;x<to;x++)

using namespace std;


int main(void){

int shk[102]={0}, su;
	while(cin >> su ){
		shk[su]++;
	}
	int j, mx = -999;
	rep2(j,1,101) mx = max(mx,shk[j]);
	rep2(j,1,101) if(mx==shk[j]) cout << j << endl;
	
	
	return 0;
}