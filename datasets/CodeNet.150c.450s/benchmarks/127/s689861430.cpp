#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int solve(string cars);

int main(){
	int n;
	string word;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> word;
		cout << solve(word) << endl;
	}
}

int solve(string cars){
	set<string> s;
	int n = cars.size();
	for (int i = 1; i < n; i++){
		string a = cars.substr(0, i);
		string b = cars.substr(i);
		s.insert(a + b);
		s.insert(b + a);
		reverse(b.begin(), b.end());
		s.insert(a + b);
		s.insert(b + a);
		reverse(a.begin(), a.end());
		s.insert(a + b);
		s.insert(b + a);
		reverse(b.begin(), b.end());
		s.insert(a + b);
		s.insert(b + a);
	}
	return s.size();
}