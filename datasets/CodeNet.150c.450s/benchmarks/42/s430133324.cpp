#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <ctime>
#include <string>
#include <queue>

using namespace std;

int n, q, t;

int main(void){
	queue< pair<string, int> > Q;
	cin >> n >> q;
	for(int i = 0; i< n; i++){
		string s;
		int T;
		cin >> s >>T;
		pair<string, int> p(s, T);
		Q.push(p);
	}

	while(!Q.empty()){
		pair<string, int> p;
		p = Q.front();
		Q.pop();
		if(p.second <= q){
			t += p.second;
			cout << p.first << " " << t << endl;
		}else{
			t += q;
			pair<string, int> p2(p.first, p.second - q);

			Q.push(p2);
		}
	}
	
    return 0;
}