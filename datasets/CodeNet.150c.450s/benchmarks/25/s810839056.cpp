#include<iostream>
#include<string>
#include<cstdio>
#include<cctype>
using namespace std;
string str2;
int main(){
	int num=0,count[1000]={0};
	char ch[1000];
	double x;
	string str,ring;
	while(cin>>str){
		for(int i=0;i<str.size();i++){
			if(isupper(str[i])){
				str[i]+='a'-'A';
			}
			num=str[i]-'a';
			count[num]++;
		}
	}
	for(int j=0;j<26;j++){
		str2=j+'a';	
		cout<<str2<<" : "<<count[j]<<endl;
	}
	return 0;

}