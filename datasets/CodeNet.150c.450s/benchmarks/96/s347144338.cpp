#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string but[10]={"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	
	for(int x=0;x<n;x++){
		string a;
		cin>>a;
	
	string ans="";
	int b=0,c=0;
		for(int i=0;i<a.size();i++){
			if(a[i]=='0'){
				if(b!=0){
				int num=(c+but[b].size()-1)%but[b].size();
				ans.push_back(but[b][num]);
				b=0,c=0;
				}
				}
			else{
				b=a[i]-'0';
				c++;
				}	
				
			}
			cout<<ans<<endl;
		}
		return 0;
	}