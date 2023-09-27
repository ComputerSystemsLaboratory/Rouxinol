#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
#include<functional>
#define all(c) c.begin(),c.end()
#define uni(c) c.erase(unique(c.begin(),c.end()),c.end())
#define pb push_back
using namespace std;
int n;
string plszero(string s){
	for(;(int)s.size()!=n;){
		s="0"+s;
	}
	//cout<<n<<"   "<<s.size()<<endl;
	return s;
}
string itos(int x){
	string s;
	while(x){
		s=(char)((x%10)+'0')+s;
		x/=10;
	}
	return s;
}
int num(string s){
	int ret=0;
	int l=s.size();
	for(int i=0;i<l;i++){
		ret*=10;
		ret+=s[i]-'0';
	}
	return ret;
}
int main(){
	string s;
	int count=1;
	while(cin>>s>>n,s!="0"||n){
		s=plszero(s);
		int cnt=1;
		map<string,int> mp;
		mp.clear();
		do{
			mp[s]=cnt++;
			string a=s,b=s;
			sort(all(a));
			sort(all(b),greater<char>());
			int x=atoi(b.c_str())-atoi(a.c_str());
			string t=itos(x);
			t=plszero(t);
			//cout<<"      "<<a<<" "<<b<<endl;
			if(mp[t]){
				cout<<mp[t]-1<<" "<<atoi(t.c_str())<<" "<<cnt-mp[t]<<endl;
				break;
			}
			//cout<<t<<endl;
			s=t;
		}while(1);
		//cout<<count++<<endl;
	}
	return 0;
}