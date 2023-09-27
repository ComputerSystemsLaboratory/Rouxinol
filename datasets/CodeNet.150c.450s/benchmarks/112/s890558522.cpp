#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	int n, m;
	string a, b, c;
	vector<pair<string, string> > v;
	vector<string> vs;
	while(1){
		string s;
		cin >> n;
		if(n == 0){
			break;
		}
		for(int i = 0; i < n; i++){
			cin >> a >> b;
			v.push_back(make_pair(a, b));
		}
		cin >> m;
		for(int i = 0; i < m; i++){
			cin >> c;
			for(int j = 0; j < v.size(); j++){
				if(c == v[j].first){
					c = v[j].second;
					break;
				}
			}
			s += c;
		}
		vs.push_back(s);
		v.clear();
	}
	for(int i = 0; i < vs.size(); i++){
		cout << vs[i] << endl;
	}
	return 0;
}