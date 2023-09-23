#include <iostream>
#include <set>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int d[2]={0},t;
	rep(i,2) rep(j,4)cin >> t , d[i] += t;
	cout << max(d[0],d[1]) << endl;
}