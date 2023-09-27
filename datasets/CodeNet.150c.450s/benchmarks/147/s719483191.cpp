#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
int main(){
	int n;
	cin >> n;
	vector<int> a(10000);
	for(int i=1; i<=100; i++){
	for(int j=1; j<=100; j++){
	for(int k=1; k<=100; k++){
		if(i*i+j*j+k*k+i*j+j*k+k*i <= 10000) a[i*i+j*j+k*k+i*j+j*k+k*i-1]++;
	}}}
	rep(i, n){
		cout << a[i] << endl;
	}
	return 0;
}