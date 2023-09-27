#include<map>
#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	map<string, bool> mp;
	for(int i=0;i<n;i++){
		string s1, s2;
		cin>>s1>>s2;
		if(s1 == "insert"){
			mp[s2] = true;
		}else{
			if(mp[s2]){
				cout<<"yes"<<endl;
			}else{
				cout<<"no"<<endl;
			}
		}
	}
	return 0;
}
