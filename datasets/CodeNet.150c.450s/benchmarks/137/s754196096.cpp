#include<bits/stdc++.h>
using namespace std;
set<string> s;
int main(){
	char i[5];
	char o[13];
	int n;
	cin>>n;
	while(n--){
		cin>>i;
		cin>>o;
		string str;
		if(i[0]=='i'){
			s.insert(o);
		}
		else if(i[0]=='f'){
			if(s.count(o)!=0){
				cout<<"yes"<<endl;
			}else{
				cout<<"no"<<endl;
			}
		}
	}
	return 0;
}
