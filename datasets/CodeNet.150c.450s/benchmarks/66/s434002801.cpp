#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <string>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int n, m;
	// door[id] := id があるときは true を返す.
	// idが存在するかどうかのチェックは door.count(id)
	map<string,bool> door;
	// is_open := ドアが開いているかどうか.
	bool is_open = false;
	cin >> n;
	for(int i = 0 ; i < n ; i++ ){
		string u;
		cin >> u;
		door[u] = true;
	}
	cin >> m;
	for(int i = 0 ; i < m ; i++ ){
		string t;
		cin >> t;
		
		if( door.count(t) ){ // id が存在するとき
			if( is_open ){ // ドアが開いているときは施錠される
				cout << "Closed by " << t << endl;
				is_open = false;
			}else{
				cout << "Opened by " << t << endl;
				is_open = true;
			}
		}else{ // id が存在しないとき
			cout << "Unknown " << t << endl;
		}
	}
}