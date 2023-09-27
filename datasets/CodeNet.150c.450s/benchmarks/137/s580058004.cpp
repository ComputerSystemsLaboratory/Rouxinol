#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	set<string> str;
	for(int i=0; i<n; i++){
		string command; cin >> command;
		string s; cin >> s;
		if(command=="insert"){
			str.insert(s);
		}
		else{
			if(str.find(s) != str.end()){
				cout << "yes" << endl;
			}
			else
				cout << "no" << endl;
		}
	}
	return 0;
}