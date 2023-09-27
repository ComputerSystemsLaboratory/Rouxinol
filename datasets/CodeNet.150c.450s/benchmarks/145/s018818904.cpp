#include<iostream>
#include<sstream>
#include<string>
#include<map>
using namespace std;

int main(){
	map<string,int> mp;
	string str,tmp[1111];
	getline(cin,str);
	istringstream ss(str);
	int i=0;
	while(getline(ss,tmp[i],' ')){
		mp[tmp[i]]++;
	}
	map<string,int>::iterator itr;
	int ans=0,len=0;
	string s1,s2;
	for(itr = mp.begin(); itr != mp.end(); ++itr) {
	   	string w = itr->first;
    	int c = itr->second;
    	if(c > ans) {
    		ans = c;
    		s1 = w;
    	}
    	int s = w.size();
    	if(s > len) {
    		len = s;
    		s2 = w;
    	}
	}
	cout << s1 << " " << s2 << endl;
}