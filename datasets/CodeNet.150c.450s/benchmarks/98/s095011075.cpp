#include <iostream>
#include <vector>
#include <set>
using namespace std;

int abs(int x, int y) { return x > y ? x - y : y - x; }

int main(){
	vector<int> ansvec;
	for (;;){
		int n, m;
		cin >> n >> m;
		if (n == 0) break;

		multiset<int> tarocards;
		int tarosum = 0;
		for (int i = 0; i < n; i++){
			int s;
			cin >> s;
			tarocards.insert(s);
			tarosum += s;
		}
		multiset<int> hanakocards;
		int hanakosum = 0;
		for (int i = 0; i < m; i++){
			int s;
			cin >> s;
			hanakocards.insert(s);
			hanakosum += s;
		}

		if (abs(hanakosum - tarosum) % 2 == 1){
			ansvec.push_back(-1);
			continue;
		}

		int taroans = -1, hanakoans = -1;
		int tmpcardsum = 1000;
		for (auto it = tarocards.begin(); it != tarocards.end(); it++){
			int tmptaroans = *it;
			int tmphanakoans = hanakosum - tarosum + 2 * tmptaroans;
			tmphanakoans /= 2;
			if (hanakocards.count(tmphanakoans) > 0 && (tmptaroans + tmphanakoans) < tmpcardsum){
				taroans = tmptaroans;
				hanakoans = tmphanakoans;
				tmpcardsum = tmptaroans + tmphanakoans;
			}
		}

		if (taroans > 0){
			ansvec.push_back(taroans);
			ansvec.push_back(hanakoans);
		}
		else{
			ansvec.push_back(-1);
		}
	}
	
	for (auto it = ansvec.begin(); it != ansvec.end(); it++){
		cout << *it;
		if (*it != -1) cout << " " << *(++it);
		cout << endl;
	}

	return 0;
}