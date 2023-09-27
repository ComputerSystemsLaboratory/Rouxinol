#include<map>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	map<string,int> mp;
	string s;
	while(cin>>s){
		if(mp.count(s)==0)	mp.insert(make_pair(s,1));
		else				mp.find(s)->second++;
	}
	int fmax=0,lmax=0;
	string sfmax,slmax;
	map<string,int>::iterator it;
	for(it=mp.begin();it!=mp.end();it++){
		if(fmax<it->second)			sfmax=it->first,fmax=it->second;
		if(lmax<it->first.length())	slmax=it->first,lmax=it->first.length();
	}
	cout<<sfmax<<" "<<slmax<<endl;
	return 0;
}