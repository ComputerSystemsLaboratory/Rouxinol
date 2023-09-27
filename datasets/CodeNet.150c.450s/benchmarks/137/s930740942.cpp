#include<iostream>
#include<set>

using namespace std;

int main(){
	set<string> st;
	int n; cin >> n;

	for (int i = 0; i < n; i++){
		string act;
		string str;
		cin >> act >> str;
		if (act == "insert"){
			st.insert(str);
		}else if (act == "find"){
			set<string>::iterator itr = st.find(str);
			if (itr == st.end()){
				cout << "no" << endl;
			} else {
				cout << "yes" << endl;
			}
		}	
	}

return 0;
}