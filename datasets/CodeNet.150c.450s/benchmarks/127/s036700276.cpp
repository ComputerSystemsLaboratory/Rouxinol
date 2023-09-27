#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	int m;
	cin >> m;
	for(int i = 0; i < m; i++){
		string s;
		map<string, int> mp;
		cin >> s;
		int size = s.size();
		for(int j = 1; j < size; j++){
			string t1(s.begin(), s.begin() + j);
			string t2(s.begin() + j, s.end());
			string t3(t1.rbegin(), t1.rend());
			string t4(t2.rbegin(), t2.rend());
			mp[t1+t2]++;
			mp[t1+t4]++;
			mp[t3+t2]++;
			mp[t3+t4]++;
			mp[t2+t1]++;
			mp[t2+t3]++;
			mp[t4+t1]++;
			mp[t4+t3]++;
		}
		cout << mp.size() << endl;
	}
	return 0;
}