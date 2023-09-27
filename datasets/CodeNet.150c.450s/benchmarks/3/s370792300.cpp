#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
	string str; cin >> str;
	int n; cin >> n;
	while (n--){
		string tmp; cin >> tmp;
		if (tmp == "replace"){
			int a, b; string r; cin >> a >> b >> r;
			str=str.replace(a, b-a+1, r);
		}
		else if (tmp == "reverse"){
			int a, b; cin >> a >> b;
			string rev = str.substr(a, b - a + 1);
			reverse(rev.begin(), rev.end());
			str = str.replace(a, b-a+1, rev);
		}
		else if (tmp == "print"){
			int a, b; cin >> a >> b;
			cout << str.substr(a, b - a + 1) << '\n';
		}
	}
}