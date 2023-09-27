#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <map>
#include <bitset>
using namespace std;
#define len(n) (int)n.length()
#define dump cout
#define pb push_back
#define ll long long

int main()
{
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	
	vector<int> vec;
	for (int i = 0; i < n; i++) {
	    int tmp;
		cin >> tmp; vec.pb(tmp);
	}
	
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int min_i = i;
	    for (int k = i; k < n; k++) {
	        if (vec[min_i] > vec[k])
			{
				min_i = k;
			}
	    }
	    int tmp = vec[min_i];
		vec[min_i] = vec[i];
		vec[i] = tmp;
		if (min_i != i)
			ans++;
	}
	
	for (int i = 0; i < n-1; i++) {
	    cout << vec[i] << " ";
	}
	cout << vec[n-1] << endl;
	cout << ans << endl;
	
	
	return 0;
}