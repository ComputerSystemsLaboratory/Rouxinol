#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n,q,a,c;
	c = 0;
	cin >> n;
	vector<int> s(n);
	for(int i = 0;i < n;++i){
		cin >> a;
		s[i] = a;
	}
	cin >> q;
	vector<int> t(q);
	for(int i = 0;i < q;++i){
		cin >> a;
		t[i] = a;
	}
	for(int i = 0;i < q;++i){
		a = t[i];
		if(find(s.begin(), s.end(), a) != s.end()) ++c;
	}
	cout << c << endl;
	return 0;
}