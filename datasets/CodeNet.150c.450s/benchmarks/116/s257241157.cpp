#include <stdio.h>
#include <iostream>
#include <vector>
#include <list>
#include <cmath>
#include <fstream>
#include <algorithm>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <complex>
#include <iterator>
#include <cstdlib>
#include <sstream>


using namespace std;

#define EPS (1e-10)
#define EQ(a,b) (abs((a) - (b)) < EPS)
#define EQV(a,b) (EQ((a).real(),(b).real()) && EQ((a).imag(),(b).imag()))

typedef complex<double> P;
typedef long long ll;

const int MAX_SIZE = 10000;

int main(){

	int n,k;
	int a[100001];


	while(cin >> n >> k && !(n==0&&k==0)){
	for(int i = 0; i < n; i++)
		cin >> a[i];

	int ub,lb;
	ub=lb=0;
	ll cSum=0;
	for(int i = 0; i < k; i++){
		cSum += a[i];
	}
	ll maxSum = cSum;
	for(int i = 1; i <= n - k; i++){
		cSum -= a[i-1];
		cSum += a[i+k-1];
		maxSum = max(maxSum,cSum);
	}

	cout << maxSum << endl;
	}

	return 0;
}