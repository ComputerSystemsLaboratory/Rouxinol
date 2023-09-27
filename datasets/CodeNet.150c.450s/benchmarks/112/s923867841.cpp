#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <map>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

bool has_key_using_count(map<char, char> &m, char n){
    if (m.count(n) == 0){
		//cout << "m doesn't have " << n << "." << endl;
        return false;
    }
    else{
        //cout << "m has " << n << "." << endl;
        return true;
    }
}

int main()
{
	//ifstream cin("sampleA.txt");

	int n = 0;
	//map<string, string> table;
	map<char, char> table;
	string input = "", ans = "";
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		table.clear();
		ans = "";
		input = "";

		//cin >> n;
		rep(i, n) {
			// 暗号表をmapに追加する
			char a, b;
			cin >> a >> b;
			//table.insert( map<string, string>::value_type(a, b));
			table.insert( map<char, char>::value_type(a, b));
		}
		
		// 変換対象文字列の読み込み&出力
		cin >> n;
		rep(i, n) {
			char t = 'a';
			cin >> t;
			input.push_back(t);

			// 表にない場合はそのまま出力
			//if (table[t] != null) {
			if ( has_key_using_count(table, t)) {
				ans.push_back(table[t]);
			} else {
				ans.push_back(t);
			}
		}

		// 出力する
		cout << ans << endl;
	}

	return 0;
}