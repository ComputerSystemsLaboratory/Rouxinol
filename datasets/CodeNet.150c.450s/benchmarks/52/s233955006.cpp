#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
using namespace std;

#define FOR(i,a,b) for(long long int i=(a);i<(b);i++)
#define REP(i,n) for(long long int i=0;i<(n);i++)
#define ALL(s) (s).begin(),(s).end()

#define PI 3.14159265358479

typedef long long ll;
typedef vector<long long int> vi;
typedef vector<long long int>::iterator vit;

int main(){
	int n, k;
	vector<int> vi, vi2;
	while (cin >> n)
	{
		if (n == 0){
			vi.pop_back();
			vi2.push_back(k);
		}
		else {
			vi.push_back(n);
		}
		k = vi[vi.size() - 1];
	}
	REP(i, vi2.size()){
		cout << vi2[i] << endl;
	}
}