#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str;
	int q;
	int a,b;
	string p;
	string query;
	
	
	cin>>str;
	cin>>q;
	for(int i=0;i<q;++i){
		cin>>query;
		cin>>a>>b;
		
		if(query=="print"){
			cout<<str.substr(a,b-a+1)<<endl;
		}else if(query=="reverse"){
			reverse(&(str[a]), &(str[b+1]));
		}else if(query=="replace"){
			cin>>p;
			for(int j=0;j<b-a+1;++j){
				str[a+j] = p[j];
			}
		}
	}
}