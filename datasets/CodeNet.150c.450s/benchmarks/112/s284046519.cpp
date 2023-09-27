#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	int n, m;
	char tmp;
	string ans = "";
	
	while (true){
		cin >> n;
		if (n == 0)
			break;
		vector<char> before(n);
		vector<char> after(n);
		for (int i = 0; i < n; ++i){
			cin >> before[i];
			cin >> after[i];
		}

		cin >> m;
		for (int i = 0; i < m; ++i){
			cin >> tmp;
			for (int j = 0; j < n; ++j){
				if (tmp == before[j]){
					tmp = after[j];
					break;
				}
			}
			ans += tmp;
		}

		cout << ans << endl;

		ans = "";
		before.clear();
		after.clear();
	}
	return 0;
}