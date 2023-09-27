#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> s(5);
	for( auto &&i : s ) cin >> i;
	sort(s.rbegin(),s.rend());
	cout << s[0];
	for(int i = 1 ; i < 5 ; i++) cout << " " << s[i];
	cout << endl;
}