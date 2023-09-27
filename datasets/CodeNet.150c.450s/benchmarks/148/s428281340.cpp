#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	map<string, int> mp;
	mp["AC"] = 0;
	mp["WA"] = 0;
	mp["TLE"] = 0;
	mp["RE"] = 0;
	
	for(int i=1; i<=n; i++){
		string s;
		cin >> s;
		mp[s]++;
	}
	
	printf("AC x %d\n", mp["AC"]);
	printf("WA x %d\n", mp["WA"]);
	printf("TLE x %d\n", mp["TLE"]);
	printf("RE x %d\n", mp["RE"]);
	return 0;
}