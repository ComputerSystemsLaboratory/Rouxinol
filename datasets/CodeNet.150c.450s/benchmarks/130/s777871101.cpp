#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n1, n2;
	vector< vector<int> > v;
	vector<int> v2, ans;
	cin >> n1 >> n2;

	for(int y = 0; y < n1; y++){
		vector<int> vTmp;
		for(int x = 0; x < n2; x++){
			int tmp;
			cin >> tmp;
			vTmp.push_back(tmp);
		}
		v.push_back(vTmp);
	}

	for(int i = 0; i < n2; i++){
		int tmp;
		cin >> tmp;
		v2.push_back(tmp);
	}

	for(int y = 0; y < n1; y++){
		int tmp = 0;
		for(int x = 0; x < n2; x++){
			tmp += v[y][x] * v2[x];
		}
		ans.push_back(tmp);
	}

	for(int i = 0; i < n1; i++){
		cout << ans[i] << '\n';
	}
}

