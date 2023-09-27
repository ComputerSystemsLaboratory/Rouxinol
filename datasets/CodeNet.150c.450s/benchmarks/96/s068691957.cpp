#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;
typedef long long int lli;

string charset[10][5] = {
	{},
	{".", ",", "!", "?", " "},
	{"a", "b", "c"},
	{"d", "e", "f"},
	{"g", "h", "i"},
	{"j", "k", "l"},
	{"m", "n", "o"},
	{"p", "q", "r", "s"},
	{"t", "u", "v"},
	{"w", "x", "y", "z"}
};
int loop[10] = {0, 5, 3, 3, 3, 3, 3, 4, 3, 4};

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;
	vector<string> ansvec;
	for (int n = 0; n < N; n++){
		string s;
		cin >> s;

		int i = 0;
		int push = -1;
		string ans = "";
		while (i < s.length()){
			int num = stoi(s.substr(i, 1));
			if (num != 0){
				int thisnum = num;
				while (num != 0){
					push++;
					i++;
					num = stoi(s.substr(i, 1));
				}
				ans += charset[thisnum][push % loop[thisnum]];
				push = -1;
			}
			i++;
		}
		cout << ans << endl;
		//ansvec.push_back(ans);
	}
/*
	for (auto it = ansvec.begin(); it != ansvec.end(); it++){
		cout << *it << endl;
	}*/
	return 0;
}