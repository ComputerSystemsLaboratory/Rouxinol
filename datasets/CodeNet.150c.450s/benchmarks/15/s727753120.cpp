#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <map>
#include <bitset>
#include <stack>
#include <queue>
using namespace std;
#define len(n) (int)n.length()
#define dump cout
#define pb push_back
#define ll long long

int main()
{
	ios::sync_with_stdio(false);
		
	
	int n, q;
	ll s[10000] = {0};
	ll t[10000] = {0};
	
	cin >> n;
	for (int i = 0; i < n; i++) {
	    cin >> s[i];
	}
	cin >> q;
	ll c = 0;
	for (int i = 0; i < q; i++) {
		cin >> t[i];
		bool isFound = false;
	    for (int k = 0; k < n; k++) {
	        if (t[i] == s[k])
			{
				isFound = true;
				break;
			}
	    }
		if (isFound)
			c++;
	}
	cout <<  c << endl;
	
	
	return 0;
}