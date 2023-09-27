#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {
	char tilt;
	int i = 0;							//iは先頭から何番目
	stack <int>	S1;						//'\'の位置を格納する
	stack < pair< int, int > > S2;		//面積を測る初期位相と面積を格納
	int ans = 0;
	for (i; cin >> tilt; i++) {
		if (tilt == '\\') {
			S1.push(i);
		}
		else if (tilt == '/' && S1.size() > 0) {
			int ver = S1.top();
			S1.pop();
			int area = i - ver;
			ans += i - ver;
			while (S2.size()>0 && S2.top().first>ver) {
				area += S2.top().second;
				S2.pop();
			}
			S2.push(make_pair(ver, area));
		}


	}

	vector<int> data;
	while (S2.size() > 0) {
		data.push_back(S2.top().second);
		S2.pop();
	}
	cout << ans << endl;
	cout << data.size();
	for (int l = data.size() - 1; l >= 0; l--) {
		cout << " ";
		cout << data[l];
	}
	cout << endl;


}
