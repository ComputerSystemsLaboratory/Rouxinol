#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int comp(pair<string,int>a,pair<string,int>b){
	return a.second < b.second;
}
int main() {
	map<string,int> strtable;
	map<string,int>::iterator mnum;
	string word;
	string maxlw;

	while(cin>>word){
		if(strtable.find(word) == strtable.end())strtable[word]=1;
		else strtable[word]++;
		if(word.length() > maxlw.length())maxlw = word;
	}
	
	mnum = max_element(strtable.begin(),strtable.end(), comp);
	
	cout<<mnum->first<<" "<<maxlw<<endl;
	
	return 0;
}