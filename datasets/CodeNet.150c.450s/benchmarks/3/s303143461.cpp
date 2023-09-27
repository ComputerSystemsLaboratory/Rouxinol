#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string str;
	int n;
	cin >> str>>n;
	while (n--){
		string require;
		cin >> require;
		if (require == "replace"){
			int a, b;
			string p;
			cin >> a >> b >> p;
			str.replace(a, b - a + 1, p);
		}
		else if (require == "reverse"){
			int a, b;
			string rev;
			cin >> a >> b;
			rev = str.substr(a, b - a + 1);
			reverse(rev.begin(), rev.end());
			str.replace(a, b - a + 1, rev);
		}
		else{
			int a, b;
			cin >> a >> b;
			cout << str.substr(a, b - a + 1) << endl;
		}
	}
}