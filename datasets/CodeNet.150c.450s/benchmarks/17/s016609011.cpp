#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <cmath>
#include <complex>
#include <map>
using namespace std;
 
#define rep(i,n) for(int i=0;i<int(n);++i)
 
static const double PI=6*asin(0.5);
typedef complex<double> P;
typedef long long ll;
static const double eps = 1e-8;
 
vector<int> a;
int t;

int main(){
	while(cin>>t){
		a.push_back(t);
	}
	sort(a.begin(),a.end());
	int n=a.size();
	cout<<a[(n--)-1];
	a.pop_back();
	while(!a.empty()){
		cout<<" "<<a[(n--)-1];
		a.pop_back();
	}
	cout<<endl;
	return 0;
}