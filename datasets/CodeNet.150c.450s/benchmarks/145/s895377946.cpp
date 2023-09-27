#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
	string s;	getline(cin,s);
	string word;
	map<string,int> dic;
	for(int i=0;i<s.size();i++){
		if(s[i]!=' '){
			word+=s[i];
		}
		else{
			dic[word]++;
			word="";
		}
	}
	dic[word]++;
	int num=0;
	for(auto it:dic)	num=max(num,it.second);
	for(auto it:dic){
		if(num==it.second) 	cout<<it.first<<" ";
	}
	num=0;
	for(auto it:dic)	num=max(num,(int)it.first.size());
	for(auto it:dic){
		if(num==it.first.size())	cout<<it.first<<endl;
	}
	return 0;
}