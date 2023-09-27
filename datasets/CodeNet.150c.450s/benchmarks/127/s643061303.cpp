#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main(){
	int n;
	cin >> n;
	int i;
	

	for(i = 0;i < n;i++){
		string train;
		cin >> train;
		set<string> ans;

		ans.insert(train);
		for(unsigned int j = 1;j < train.size();j++){
			string change1 = train.substr(0, j);
			string change2 = train.substr(j);
			string re1 = change1;
			string re2 = change2;

			reverse(re1.begin(), re1.end());
			reverse(re2.begin(), re2.end());
			//cout << change1 << " " << change2 << " " << re1 << " " << re2 << endl;
			ans.insert(change1 + re2);
			ans.insert(re1 + change2);
			ans.insert(re1 + re2);
			ans.insert(change2 + change1);
			ans.insert(change2 + re1);
			ans.insert(re2 + change1);
		}

		reverse(train.begin(),train.end());
		ans.insert(train);

		cout << ans.size() << endl;
	}

	
	return 0;
}