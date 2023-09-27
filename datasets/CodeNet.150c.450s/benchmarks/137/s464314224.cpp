#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
	set<string>s;
	int n; cin >> n;
	for (int i = 0; i < n; i++){
		string a, b; cin >> a >> b;
		if (a[0] == 'i') 
			s.insert(b);
		else{
			if (s.find(b) != s.end())cout << "yes\n";
			else cout << "no\n";
		}
	}
}