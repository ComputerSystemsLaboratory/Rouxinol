#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
	int n, m;
	string u;
	set<string> st;
	
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> u;
		st.insert(u);
	}

	cin >> m;
	bool f = false;
	for(int i = 0; i < m; ++i){
		cin >> u;
		if( st.find(u) == st.end() ){
			cout << "Unknown ";
		}
		else if( f ){
			f = false;
			cout << "Closed by ";
		}
		else{
			f = true;
			cout << "Opened by ";
		}
		cout << u << '\n';
	}
}