#include <bits/stdc++.h>

using namespace std;

string keyd[] = {"",".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
int main(){
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		string input; cin >> input;
		int pos = -1, key = 0;
		string::iterator itr = input.begin();
		while(itr != input.end()){
			if( *itr == '0'){
				if(key == 0){
					itr++;
					continue;
				}
				pos = pos % keyd[key].size();
				cout << keyd[key][pos];
				pos = -1;
				key = 0;
			}
			else{
				if(pos == -1)key = *itr - '0';
				pos++;
			}
			itr++;
		}
		cout << endl;
	}

	return 0;
}

