#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<map>

using namespace std;

int main(){
	map<string,int> words;
	string most,max;
	char wd[33];
	while(cin>>wd){
		string temp(wd);
		if(words.count(temp)==0)
		words[temp]=1;
		else
		words[temp]++;
		if(words[most]<words[temp])
		most=temp;
		if(max.size()<temp.size())
		max=temp;
	}
	printf("%s %s\n",most.c_str(),max.c_str());
}