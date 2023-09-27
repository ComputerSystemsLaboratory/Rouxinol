#include <iostream>
#include <unordered_set>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int n;
unordered_set<string> s;

int main(){
	ios_base::sync_with_stdio(false);
	cin >> n;
	rep(i, n){
		string c, d;
		cin >> c >> d;
		if(c == "insert"){
			s.insert(d);
		}
		else{
			cout << (s.find(d) != s.end() ? "yes" : "no") << endl;
		}
	}
	return 0;
}