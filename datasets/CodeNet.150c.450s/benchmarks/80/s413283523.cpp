#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define clear(v) memset(v,0,sizeof(v))
#define ALL(v) (v).begin(),(v).end()

int main(){
	int p[2][4];
	int sum[2] = {};
	rep(i, 2){
		rep(j, 4) cin >> p[i][j];
	}
	rep(i, 2){
		rep(j, 4) sum[i]+=p[i][j];
	}
	cout << ((sum[0] > sum[1]) ? sum[0] : sum[1]) << endl;
	return 0;
}