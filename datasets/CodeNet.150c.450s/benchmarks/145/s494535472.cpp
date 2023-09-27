#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int i,i1,len,len1,check,max1,memo1,max2,memo2;
	max1 = 0;
	max2 = 0;
	memo1 = 0;
	memo2 = 0;
	string t;
	vector<string> s;
	vector<int> a,u;
	for (int h = 0; h < 500; h++) {
		u.push_back(0);
	}
	while (cin >> t) {
		check = 0;
		len = s.size();
		for (i = 0; i < len; i++) {
			if (t == s[i]) {
				u[i] += 1;
				check = 1;
			}
		}
		if (check == 0) {
			s.push_back(t);
			len1 = t.size();
			a.push_back(len1);
		}
	}
	len = s.size();
	for (i1 = 0; i1 < len; i1++) {
		while (max1 < u[i1]) {
			max1 = u[i1];
			memo1 = i1;
		}
	    while (max2 < a[i1]) {
			max2 = a[i1];
			memo2 = i1;
		}
	}
	cout << s[memo1] << " " << s[memo2] << endl;
	return 0;
}