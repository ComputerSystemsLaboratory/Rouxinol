#include<iostream>
#include<map>
using namespace std;

int main(){
	map<char,char> table;
	int n;
	char s,t;
	while(cin>>n&&n){
		table.clear();
		while(n--){
			cin>>s>>t;
			table[s] = t;
		}
		cin>>n;
		while(n--){
			cin>>s;
			if(table.find(s)!=table.end())cout<<table[s];
			else cout<<s;
		}
		cout<<endl;
	}
	return 0;
}