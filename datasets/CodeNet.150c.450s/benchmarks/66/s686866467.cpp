#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n;
	
	vector<string>v;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		v.push_back(s);
		}
		
		cin>>m;
		int flg=0;
		for(int j=0;j<m;j++){
			string s;
			cin>>s;
			int match=0;
			for(int i=0;i<n;i++){
				if(s==v[i]){
					match=1;
					break;
					}
				}
				
			if(match==0)cout<<"Unknown "<<s<<endl;
			else{
				if(flg==0){
					cout<<"Opened by "<<s<<endl;
					flg=1;
					}
				else{
					cout<<"Closed by "<<s<<endl;
					flg=0;
					}	
				}	
			}
			return 0;
	}