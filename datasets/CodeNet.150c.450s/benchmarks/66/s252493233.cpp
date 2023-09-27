#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
	int N, M;
	while(cin >> N){
		set<string> S;
		for(int i=0;i<N;i++){
			string s; cin >> s;
			S.insert(s);
		}
		cin >> M;
		int open = 0;
		for(int i=0;i<M;i++){
			string s; cin >> s;
			if(S.count(s)){
				if(open) cout << "Closed by ";
				else     cout << "Opened by ";
				cout << s << endl;
				open = !open;
			} else {
				cout << "Unknown " << s << endl;
			}
		}
	}
}