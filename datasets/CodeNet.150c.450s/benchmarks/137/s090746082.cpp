#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
        cin.tie(0);
	int n;
	cin >> n;
	set<string> st;
	while(n--){
		string order;
		string str;
		
		cin>>order;
		cin>>str;
		
		if(order=="insert"){
			st.insert(str);
		}else{
			if(st.find(str)!=st.end()){
				cout<<"yes"<<endl;
			}else{
				cout<<"no"<<endl;
			}
		}
	}
	return 0;
}