#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <string>
using namespace std;

#define ll long long
#define vvi vector<vector<int>>
#define All(X) X.begin(),X.end()

int main(){
	int n;
	cin >> n;
	ll int tmp;
	ll int sum,min,max;
	max = -1000010;
	min = 9999999;
	sum = 0;
	for(int i=0;i<n;i++){
		cin >> tmp;
		if(tmp<min) min = tmp;
		if(tmp>max) max = tmp;
		sum += tmp;
	}
	cout << min <<" " << max << " " << sum << endl;

}