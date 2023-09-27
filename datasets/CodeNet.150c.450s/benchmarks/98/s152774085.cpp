#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, m;
	while(true) {
		cin >> n;
		cin >> m;
		
		if(n == 0 && m == 0)
			break;
		
		vector<int> taro;
		vector<int> hanako;
		int taroTotal = 0;
		int hanakoTotal = 0;
		
		
		for(int i = 0; i < n; i++) {
			int p;
			cin >> p;
			taroTotal += p;
			taro.push_back(p);
		}
		for(int i = 0; i < m; i++) {
			int p;
			cin >> p;
			hanakoTotal += p;
			hanako.push_back(p);
		}
		
		int transFromTaro = -1;
		int transFromHanako = -1;
		int transSum = 100000;
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				int taroP = taro[i];
				int hanakoP = hanako[j];
				if(taroTotal - taroP + hanakoP == hanakoTotal - hanakoP + taroP
						&& taroP + hanakoP < transSum) {
					transFromTaro = taroP;
					transFromHanako = hanakoP;
					transSum = taroP + hanakoP;
				}
			}
		}
		
		if(transFromTaro == -1)
			cout << -1 << endl;
		else
			cout << transFromTaro << " " << transFromHanako << endl;
	}
	
	return 0;
}