#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cmath>
using namespace std;

const static double pi = 4*atan(1.0);
int main(){
	long long n,sum=0;
	cin >> n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
		sum += v[i];
	}
	sort(begin(v),end(v));
	cout << v[0] << " " << v[n-1] << " " << sum << endl;
	return 0;
}