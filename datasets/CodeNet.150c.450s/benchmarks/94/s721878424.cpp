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
	
	vector<int> a;
	for (int i = 0; i < n; i++) {
	    int tmp;
		cin >> tmp;
		a.pb(tmp);
	}
	
	bool flag = true;
	int ans = 0;
	for (int k = 0; flag; k++) {
		flag = false;
		for (int i = n-1; i >= k+1; i--) {
			if (a[i] < a[i-1])
			{
				flag = true;
				int tmp = a[i];
				a[i] = a[i-1];
				a[i-1] = tmp;
				ans++;
				
			}
		}
		
	}
	
	for (int i = 0; i < n-1; i++) {
	    cout << a[i] << " ";
	}
	cout << a[n-1] << endl;
	cout << ans << endl;
	
	
	return 0;
}