//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <cstring>
#include <climits>
#define INF INT_MAX / 2
using namespace std;

typedef pair<double, double> P;
typedef long long ll;

int judge(vector<int> a,const int& n){
	for(int i=0;i<a.size();i++){
		if(a[i] == n)return i;
	}
	return -1;
}

int main(void) {
	int n,p;
	while(cin >> n >> p,n+p!=0){
	int i=0,ba = p;
	vector<int> a(n);
	int ret;
	while((ret=judge(a,p))== -1){
		if(ba > 0){
			a[i%n] += 1;
			ba -= 1;
		}else if(a[i%n] > 0){
			ba += a[i%n];
			a[i%n] = 0;
		}
		i++;
	}
	cout << ret << endl;
}
}

// command ctrl 上下
// command D
// command caps G → '' ""