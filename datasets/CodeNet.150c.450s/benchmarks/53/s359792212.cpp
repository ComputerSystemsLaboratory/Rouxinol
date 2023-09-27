#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <numeric>
#include <cmath>

using namespace std;

typedef long long int ll;

#define all(x) x.begin(),x.end()

const ll mod = 1e9+7;
const ll INF = 1e9;
const ll MAXN = 1e9;

int main()
{
	int n;
	cin >> n;
	if(n==1){
		cout << n << ": " << n << endl;
		return 0;
	}
	cout << n << ": ";
	for(int i = 2; i*i <= n; i++){
		while(n%i==0){
			n /= i;
			if(n == 1){
				cout << i << endl;
				return 0;
			}else{
				cout << i << " ";
			}
		}
	}

	if(n!=1){
		cout << n << endl;
	}

	return 0;
}
