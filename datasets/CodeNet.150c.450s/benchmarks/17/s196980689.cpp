#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <functional>

#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

int main(){
	vector<int> ret;
	int a;
	while(cin>>a) ret.push_back(a);
	sort(ret.begin(), ret.end() ,greater<int>());
	REP(i, ret.size()) {
		cout<<ret[i];
		if (i != ret.size() -1) cout << " ";
	}
	cout<<endl;
	return 0;
}