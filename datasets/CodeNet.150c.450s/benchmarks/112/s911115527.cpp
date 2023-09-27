#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <queue>
#include <sstream>
using namespace std;
int main(void){
	int n;
	while(cin >> n){
		if(n == 0)break;
		string L, S;
		for(int i = 0; i < n; i++){
			char a, b;
			cin >> a;
			cin >> b;
			L.push_back(a);
			S.push_back(b);
		}
		int m;
		cin >> m;
		int j;
		for(int i = 0; i < m; i++){
			int cnt = 0;
			char c;
			cin >> c;
			for(j = 0; j < n; j++){
				if(c == L[j]){
					cout << S[j];
					cnt++;
					break;
				}
			}
			if(cnt == 0)cout << c;
		}
		cout << endl;
	}
}