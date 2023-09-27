#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

int main(){
	int N;
	map<string,int> info;
	int M;
	
	cin >> N;
	for(int i = 0 ; i < N ; i++){
		string s; cin >> s;
		info[s] = 0;
	}
	int T = 0;
	cin >> M;
	for(int i = 0 ; i < M ; i++){
		string t;
		cin >> t;
		if( info.count(t) == 0 ){
			cout << "Unknown" << " " << t << endl;
			continue;
		}else if(T == 0 ){
			cout << "Opened by " << t << endl;
		}else{
			cout << "Closed by " << t << endl;
		}
		T ^= 1;
	}
}