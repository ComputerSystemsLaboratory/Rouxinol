#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(void){
	int n;
	cin>>n;
	string b[9]={".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	for(int j=0;j<n;j++){
		string s;
		cin>>s;
		int a=-1,time=0;
		string m;
		for(int i=0;i<s.size();i++){
			if(a==s[i]-'1'){
				time++;
			}else if(s[i]=='0'){
				if(a!=-1){
					time%=b[a].size();
					m=b[a][time];
					cout<<m;
					a=-1;
					time=0;
				}
			}else{
				time=0;
				a=s[i]-'1';
			}

		}
		cout<<endl;

	}
	return 0;
}
