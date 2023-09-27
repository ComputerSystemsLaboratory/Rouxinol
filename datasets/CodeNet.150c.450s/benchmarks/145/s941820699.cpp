#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<string, int> P;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	string str;
	getline(cin, str);

	vector<P> vec;
	int m = 0;
	string longest;
	for(size_t i = 0; i < str.size(); ++i){
		if(i == 0 || str[i - 1] == ' '){
			int end = 0;
			for(size_t j = 0; i + j < str.size(); ++j){
				if(i + j == str.size() - 1 || str[i + j + 1] == ' '){
					end = j + 1;
					break;
				}
			}

			string s = str.substr(i, end);

			if(end > m){
				m = end;
				longest = s;
			}

			bool check = true;
			for(size_t i = 0; i < vec.size(); ++i){
				if(vec[i].first == s){
					vec[i].second ++;
					check = false;
					break;
				}
			}

			if(check){
				vec.push_back(P(s, 1));
			}
		}
	}

	int m2 = 0;
	string most;
	for(size_t i = 0; i < vec.size(); ++i){
		//cout << vec[i].first << endl;
		if(vec[i].second > m2){
			m2 = vec[i].second;
			most = vec[i].first;
		}
	}

	cout << most << " " << longest << endl;

	return 0;
}