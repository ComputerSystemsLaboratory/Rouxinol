#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>

using namespace std;

int counter(string data);
int cnt;

int main()
{
	int m, ans;
	string dataset;
	cin >> m;
	for(int i = 0; i < m; i ++){
		cin >> dataset;
		ans = counter(dataset);
		cout << ans << endl;
	}
	return 0;
}

int counter(string data)
{
	set<string> setstr;
	int l = data.length();
	cnt = 0;
	string a, b, str;
	if(l == 1) return 1;
	for(int i = 1; i < l; i++){
		a = data.substr(0, i);
		b = data.substr(i, l - i);
		str = a + b;
		setstr.insert(str);
		str = b + a;
		setstr.insert(str);
		reverse(b.begin(), b.end());
		str = a + b;
		setstr.insert(str);
		str = b + a;
		setstr.insert(str);
		reverse(a.begin(), a.end());
		str = a + b;
		setstr.insert(str);
		str = b + a;
		setstr.insert(str);
		reverse(b.begin(), b.end());
		str = a + b;
		setstr.insert(str);
		str = b + a;
		setstr.insert(str);
	}
	return (int)setstr.size();
}