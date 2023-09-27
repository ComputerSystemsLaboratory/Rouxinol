#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
	int n;
	cin >> n;
	set<string> st;
	while(n--){
		string s;
		cin >> s;
		st.insert(s);
	}
	int m;
	cin >> m;
	bool flag = false;
	while(m--){
		string s;
		cin >> s;
		if(st.find(s) == st.end()){
			cout << "Unknown " << s << endl;
		}else{
			flag = !flag;
			cout << (flag ? "Opened by " : "Closed by ") << s << endl;
		}
	}
	return 0;
}