#include <iostream>
#include <string>
#include <queue>
#include <numeric>
#include <algorithm>
#include <set>
using namespace std;

string reverse(string str){
	string rev = "";
	for(int i=str.size()-1; i>=0; i--){
		rev += str[i];
	}
	return rev;
}

int main(){

	int m; cin >> m;
	for(int i=0; i<m; i++){
		set<string> train;
		string s; cin >> s;
		int l = s.size();
		for(int j=1; j<l; j++){
			string first = s.substr(0, j);
			string second = s.substr(j);
			train.insert(first + second);
			train.insert(first + reverse(second));
			train.insert(reverse(first) + second);
			train.insert(reverse(first) + reverse(second));
			train.insert(second + first);
			train.insert(second + reverse(first));
			train.insert(reverse(second) + first);
			train.insert(reverse(second) + reverse(first));
		}
		cout << train.size() << endl;
	}


	return 0;
}