#include<iostream>
#include<string>
using namespace std;
int main(){
	int a[26];
	string s;
	for(int i=0;i<26;i++){
			a[i]=0;
			}
	while(cin>>s){
		int b=s.size();
		for(int n=0;n<b;n++){
			for(int j=0;j<26;j++){
				if(s[n]>='A' && s[n]<='Z'){
					s[n]=s[n]+32;
					}
					if(s[n]=='a'+j){
						a[j]=a[j]+1;
					}
				}
			}
		}
		for(int j=0;j<26;j++){
			cout<<(char)('a'+j)<<" : "<<a[j]<<endl;
		}
}

