#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int dp1[1000001], dp2[1000001];

void num(){
	for(int i = 1; i < 1000001; i++){
		dp1[i] = 1000000;
		dp2[i] = 1000000;
	}
	vector<int> v1, v2;
	for(int i = 1; i < 200; i++){
		int t = (i*i*i+3*i*i+2*i)/6;
		if(t > 1000000) break;
		v1.push_back(t);
		if(t%2) v2.push_back(t);
	}
	for(int i = 1; i < 1000001; i++){
		for(int j = 0; j < v1.size(); j++){
			if(i < v1[j]) break;
			dp1[i] = min(dp1[i],dp1[i-v1[j]]+1);
		}
		for(int j = 0; j < v2.size(); j++){
			if(i < v2[j]) break;
			dp2[i] = min(dp2[i],dp2[i-v2[j]]+1);
		}
	}
}

int main(){
	num();
	int n;
	while(scanf("%d", &n), n) printf("%d %d\n", dp1[n], dp2[n]);
}