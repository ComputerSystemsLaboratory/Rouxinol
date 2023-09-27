#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>

using namespace std;

int linearSearch(vector<int> &v, int key){
	int n = v.size();
	int i = 0;
	while(v[i] != key){
		i++;
		if(i == n)
			return -1;
	}
	return i;
}

int main(){
	int n,q;
	vector<int> S,T;
	cin >> n;
	for(int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		S.push_back(tmp);
	}
	cin >> q;
	for(int i = 0; i < q; i++){
		int tmp;
		cin >> tmp;
		T.push_back(tmp);
	}

	int cnt = 0;
	for(int i = 0; i < q; i++)
		if(linearSearch(S,T[i]) != -1) cnt++;
	cout << cnt << endl;
}