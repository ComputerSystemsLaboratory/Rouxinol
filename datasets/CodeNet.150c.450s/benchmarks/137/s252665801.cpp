#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
	int n;
	cin>>n;
	set<string> st;
	while(n--){
		string o,s;
		cin>>o>>s;
		if(o=="insert")
			st.insert(s);
		else{
			if(st.find(s)!=st.end())
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
		}
	}
	return 0;
}