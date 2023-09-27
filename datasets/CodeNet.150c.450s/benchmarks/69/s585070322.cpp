#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	vector<bool>b;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		int o[10];
		for (int i = 0; i < 10; i++){
			cin >> o[i];
		}
		bool bo = true;
		int l = o[0], r = 0;
		for (int i = 1; i < 10; i++){
			if (l >= r){
				if (o[i] >= l) {
					l = o[i];
					goto cont;
				}
				else{
					goto L;
				}
			}
			else{
			L:
				if (o[i] >= r){
					r = o[i];
					goto cont;
				}
				else{
					bo = false;
				}
			}
		cont:;
		}
		b.push_back(bo);
	}
	for (bool i : b) {
		if (i)cout << "YES"; else cout << "NO";
		cout << endl;
	}
	char ch;
	cin >> ch;
}