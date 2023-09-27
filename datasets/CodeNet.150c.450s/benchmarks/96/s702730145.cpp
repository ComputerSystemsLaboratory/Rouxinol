#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string str[10]={"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		int b=0,c=0;
		for(int j=0;j<s.size();j++){
			if(s[j]=='0'){
				if(b){
					cout<<str[b][c%str[b].size()];
				}
				b=0;
			}else{
				if(s[j]-'0'==b){
					c++;
				}else{
					b=s[j]-'0';
					c=0;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}