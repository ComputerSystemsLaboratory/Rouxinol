
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <stack>
#include <queue>
#include <cctype>
#include <complex>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <cassert>
#include <iomanip>

using namespace std;

#define pb push_back
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll;
typedef complex<int> P;
typedef pair<int,int> pii;
const double EPS = 1e-10;
const double PI  = acos(-1.0);
template <class F, class T> void convert(const F &f, T &t){	stringstream ss; ss << f; ss >> t;}


bool solve(){
	int n, r;
	cin>> n>> r;
	if(n==0 && r==0) return false;
	
	int crr = 0, nex = 1;
	vector<vector<int> > a(2, vector<int>(n));
	for(int i=0;i<n;i++) a[crr][i] = n-i;
	
	for(int i=0;i<r;i++){
		int p, c;
		cin>> p>> c;
		for(int j=0;j<n;j++){
			if(j < c){
				a[nex][j] = a[crr][j+p-1];
			}else if(j < c + p - 1){
				a[nex][j] = a[crr][j-c];
			}else{
				a[nex][j] = a[crr][j];
			}
		}
		swap(crr, nex);
//		for(int k=0;k<n;k++) cout<< a[crr][k]<<" "; cout<< endl;
	}
	
	cout<< a[crr][0]<< endl;
	return true;
}

int main(){
	cout.setf(ios::fixed); cout.precision(10);
	while(solve());
	return 0;
}

 