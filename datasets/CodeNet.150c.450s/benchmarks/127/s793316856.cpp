#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
	int m;
	cin >> m;
	while(m--){
		set<string> S;
		string s;
		cin >> s;
		for(int i = 1 ; i < s.size() ; i++){
			string a = s.substr(0,i);
			string b = s.substr(i);
			string ra = a;
			string rb = b;
			reverse(ra.begin(),ra.end());
			reverse(rb.begin(),rb.end());
			S.insert(a+b);
			S.insert(b+a);
			S.insert(a+rb);
			S.insert(rb+a);
			S.insert(b+ra);
			S.insert(ra+b);
			S.insert(rb+ra);
			S.insert(ra+rb);
		}
		cout << S.size() << endl;
	}
}