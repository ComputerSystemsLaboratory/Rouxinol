#include<iostream>
#include<map>
using namespace std;

int main(){

	int n, m;
	char c1, c2;

	while(cin >> n){
		if(n == 0) break;

		map<char, char> mp;
		for(int i=0; i<n; i++){
			cin >> c1 >> c2;
			mp.insert(make_pair(c1, c2));
		}
		for(int i=0; i<10; i++){
			mp.insert(make_pair('0'+i, '0'+i));
		}
		for(int i=0; i<26; i++){
			mp.insert(make_pair('A'+i, 'A'+i));
			mp.insert(make_pair('a'+i, 'a'+i));
		}
		
		cin >> m;
		for(int i=0; i<m; i++){
			cin >> c1;
			cout << mp[c1];
		}
		cout << endl;
		
	}

	return 0;

}