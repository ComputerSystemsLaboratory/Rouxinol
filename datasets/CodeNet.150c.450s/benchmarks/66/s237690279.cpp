#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int n;
	map<string,int>F1;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		F1[s]=1;
	}
	
	int m,f=0;
	cin>>m;
	while(m--){
		string s;
		cin>>s;
		if(F1[s]){
			f++;
			if(f%2)cout<<"Opened by "<<s<<endl;
			else cout<<"Closed by "<<s<<endl;
		}
		else{
			cout<<"Unknown "<<s<<endl;
		}
	}
	
	return 0;
}