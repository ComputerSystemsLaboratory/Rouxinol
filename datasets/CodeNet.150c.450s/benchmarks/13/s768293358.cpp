#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	vector<char> a,b;
	string str1,str2;
	getline(cin,str1);
	for(int i=0; i<(int)str1.size(); i++){
		char c1=str1[i];
		a.push_back(c1);
		}
	getline(cin,str2);
	for(int i=0; i<str2.size(); i++){
		char c2=str2[i];
		b.push_back(c2);
	}
	string ans="No";
	for(int i=0; i<a.size(); i++){
		if(a[i]==b[0]){
			int k=i;
			int cnt=0;
			for(int j=0; j<b.size(); j++){
				if(a[k]!=b[j]) break;
				if(k==a.size()-1){
					k=0;
				}else{
					k++;
				}
				cnt++;
			}
			if(cnt==b.size()) ans="Yes";
		}
	}
	cout<<ans<<endl;
	return 0;
}
