#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <list>
#include <stack>
#include <queue>
#include <vector>
#include <deque>

using namespace std;

int main(){
	int n;
	int s[10001];
	int t[501];
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> s[i];
	}
	int q;
	cin >> q;
	int count = 0;
	for (int i = 0; i < q; i++){
		cin >> t[i];
	}
	for (int i = 0; i < q; i++){
		for (int j = 0; j < n; j++){
			if (t[i] == s[j]){
				count++;
				break;
			}
		}
	}
	cout << count << endl;
	return 0;
}