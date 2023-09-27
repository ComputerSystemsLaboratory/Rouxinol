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

vector<int> cut(vector<int> vi,int p,int c){
	vector<int> ret;
	for(int i=p-1;i<p-1+c;i++)
		ret.push_back(vi[i]);
	for(int i=0;i<p-1;i++)
		ret.push_back(vi[i]);
	for(int i=p+c-1;i<vi.size();i++)
		ret.push_back(vi[i]);
	return ret;
}

int main(void) {
	int n;int r;

	while(cin >> n >> r,n+r!=0){
	vector<int> a(n);
	for(int i=0;i<n;i++)
		a[i] = n-i;

	for(int i=0;i<r;i++){
		int p,c;
		cin >> p >> c;
		a = cut(a,p,c);
	}
	cout << a[0] << endl;
}
}

// command ctrl 上下
// command D
// command caps G → '' ""