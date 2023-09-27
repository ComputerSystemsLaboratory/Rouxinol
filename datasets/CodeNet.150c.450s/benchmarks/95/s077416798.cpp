#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	while( cin >> N && N){
		string s;
		map<char,int> flag;
		int f = 0;
		int cnt = 0;
		for(int i = 0 ; i < N ; i++){
			cin >> s;
			flag[s[0]] ^= 1;
			if( !f && flag['l'] && flag['r'] ){
				f = 1;
				cnt++;
			}
			if( !flag['l'] && !flag['r'] ){
				if(f){
					cnt++;
					f = 0;
				}
			}
		}
		cout << cnt << endl;
	}
}