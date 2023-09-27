#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main()
{

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		set<string> a;

		int len = s.size();
		for (int i = 1; i < len; i++) {
			// 2個に分割する
			string f = s.substr(0, i);
			string b = s.substr(i, len - i);

			// 逆順の文字列を求める
			string bf = f;
			string bb = b;
	//		reverse(begin(bf), end(bf));	// 逆順にする
	//		reverse(begin(bb), end(bb));	// 逆順にする


			std::reverse(bf.begin(), bf.end());	// 逆順にする
			std::reverse(bb.begin(), bb.end());	// 逆順にする


			// 連結する
			a.insert(f + b);
			a.insert(b + f);
			a.insert(bf + b);
			a.insert(b + bf);
			a.insert(f + bb);
			a.insert(bb + f);
			a.insert(bf + bb);
			a.insert(bb + bf);
		}
		cout << a.size() << endl;
	}
	return 0;
}

