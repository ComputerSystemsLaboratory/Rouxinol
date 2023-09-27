#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;

#define FOR(i,a,b) for(long long int i=(a);i<(b);i++)
#define REP(i,n) for(long long int i=0;i<(n);i++)
#define ALL(s) (s).begin(),(s).end()

#define PI 3.14159265358479

typedef long long ll;
typedef vector<long long int> vi;
typedef vector<long long int>::iterator vit;

int main(){
	int w, n, a, b;
	vi v;
	cin >> w >> n;
	FOR(i, 1, w+1){
		v.push_back(i);
	}
	REP(i,n){
		scanf("%d,%d",&a, &b);
		swap(v[a-1], v[b-1]);
	}
	REP(i, w){
		cout << v[i] << "\n";
	}
}