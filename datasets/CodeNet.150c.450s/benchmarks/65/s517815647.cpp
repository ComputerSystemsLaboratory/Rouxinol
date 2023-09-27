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

bool isStable(vector<int> orinum, vector<char> orist, vector<int> num, vector<char> st)
{
	vector<char> ar_orist[10];
	vector<char> ar_st[10];
	
	int n = orinum.size();
	for (int i = 0; i < n; i++) {
	    ar_orist[orinum[i]].pb(orist[i]);
		ar_st[num[i]].pb(st[i]);
	}
	
	for (int i = 0; i < 10; i++) {
	    if (ar_orist[i].size() > 0)
		{
			for (int k = 0; k < ar_orist[i].size(); k++) {
			    if (ar_orist[i][k] != ar_st[i][k])
				{
					return false;
				}
			}
			
		}
	}
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	
	vector<char> s;
	vector<int> num;
	for (int i = 0; i < n; i++) {
	    string tmp;
		cin >> tmp;
		s.pb(tmp[0]); num.pb(atoi(&tmp[1]));
	}

	// bubble	
	vector<char> sb(s);
	vector<int> numb(num);
	
	bool flag = true;
	for (int k = 0; flag; k++) {
		flag = false;
		for (int i = n-1; i >= k+1; i--) {

			if (numb[i] < numb[i-1])
			{
				flag = true;
				int tmp = numb[i];
				numb[i] = numb[i-1];
				numb[i-1] = tmp;
				
				char stmp = sb[i];
				sb[i] = sb[i-1];
				sb[i-1] = stmp;
			}
		}
	}

	
	// select	
	vector<char> ss(s);
	vector<int> nums(num);
	
	for (int i = 0; i < n; i++) {
		int min_i = i;
	    for (int k = i; k < n; k++) {
	        if(nums[min_i] > nums[k])
			{
				min_i = k;
			}
	    }
		int tmp = nums[min_i];
		nums[min_i] = nums[i];
		nums[i] = tmp;
		
		char stmp = ss[min_i];
		ss[min_i] = ss[i];
		ss[i] = stmp;
	    
	}
	
	for (int i = 0; i < n-1; i++) {
	    cout << sb[i] << numb[i] << " ";
	}
	cout << sb[n-1] << numb[n-1] << endl;
	cout << (isStable(num, s, numb, sb) ? "Stable" : "Not stable") << endl;
	
	for (int i = 0; i < n-1; i++) {
	    cout << ss[i] << nums[i] << " ";
	}
	cout << ss[n-1] << nums[n-1] << endl;
	cout << (isStable(num, s, nums, ss) ? "Stable" : "Not stable") << endl;

	
	return 0;
}