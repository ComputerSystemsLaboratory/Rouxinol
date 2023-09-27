#define _USE_MATH_DEFINES

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <list>

long long int INF = 1e18;
using namespace std;

typedef pair<long long int, long long int> P;

int main(){
	
	int n;
	cin >> n;
	
	cout << n << ":";
	
	for(int i = 2; i * i <= n; i++){
		while(n % i == 0){
			n /= i;
			cout << " " << i;
		}
	}
	
	if(n != 1){
		cout << " " << n;
	}
	cout << endl;
	
	return 0;
}
