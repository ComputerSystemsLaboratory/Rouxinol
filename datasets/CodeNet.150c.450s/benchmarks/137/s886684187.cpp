#include<iostream>
#include<string>
#include<set>
using namespace std;

int main() {
	int n;
	cin >> n;

	set<string> Dic;
	string com, word;

	while( n-- ) {
		cin>>com>>word;
		if(com[0] == 'i' ) Dic.insert(word);
		else {
			if( Dic.find(word) != Dic.end() ) cout << "yes" << endl;
			else cout << "no" <<endl;
		}
	}
}
