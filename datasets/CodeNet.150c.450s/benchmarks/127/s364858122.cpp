#include <iostream>
#include <set>
#include <algorithm>


using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main(int argc, char const* argv[])
{
	string str;
	int m;
	set<string> ans;
	
	cin >> m;
	
	rep(i, m){
		cin >> str;
		ans.clear();
		rep(i, str.length()){
			string a, b;
			a = str.substr(0, i+1);
			b = str.substr(i+1, str.length() - i+1);
			ans.insert(a + b);
			ans.insert(b + a);
			reverse(b.begin(), b.end());
			ans.insert(a + b);
			ans.insert(b + a);
			reverse(a.begin(), a.end());
			ans.insert(a + b);
			ans.insert(b + a);
			reverse(b.begin(), b.end());
			ans.insert(a + b);
			ans.insert(b + a);
		}
		
		cout << ans.size() << endl;
	}
	return 0;
}