#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<queue>
#include<list>
#include<set>

#define REP(i,n) for(int (i) = 0;(i) < (n);(i)++)
using namespace std;


int main(){
	string str;
	set<string> st;
	int n;
	cin >> n;
	REP(i,n){
		cin >> str;
		if(str == "insert") {
			cin >> str;
			st.insert(str);
		}else{
			cin >> str;
			if(st.find(str) != st.end()) cout << "yes" << endl;
			else cout << "no" << endl ;
		}
	}
	return 0;
}