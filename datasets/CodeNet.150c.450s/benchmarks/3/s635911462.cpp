#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin >> s;
	int n; cin >> n;
	for(int i=0; i<n; i++){
		string com; cin >> com;
		if(com == "print"){
			int a, b; cin >> a >> b;
			cout << s.substr(a,b-a+1) << endl;
		}
		if(com == "reverse"){
			int a, b; cin >> a >> b;
			reverse(s.begin()+a,s.begin()+b+1);
		}
		if(com == "replace"){
			int a, b; cin >> a >> b;
			string word; cin >> word;
			s.replace(a,b-a+1,word);
		}
	}
	return 0;
}