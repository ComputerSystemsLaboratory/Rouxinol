#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <cstring>
#include <cctype>
#include <sstream>
#include <set>
#include <map>
#include <queue>
#include <complex>
using namespace std;

int main() {
	while(true) {
		int n, r;
		cin >> n >> r;
		if(n==0 && r==0) break;

		vector<int> cards;
		for(int i=0; i<n; i++)
			cards.push_back(i+1);
		int p, c;
		for(int i=0; i<r; i++) {
			cin >> p >> c;
			for(int j=0; j<c; j++) {
				int temp;
				temp = cards[n-p+1-c];
				cards.erase(cards.begin()+n-p+1-c);
				cards.push_back(temp);
			}
		}
		cout << cards[n-1] << endl;
	}
	return 0;
}