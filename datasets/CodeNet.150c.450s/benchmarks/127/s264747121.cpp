#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int n,count;
	string s,a,b,temp;
	cin>>n;
	map<string,int> mp;
	while(n--){
		cin>>s;
		count=0;
		for(int i=1;i<(int)s.size();i++){
			a=s.substr(0,i);
			b=s.substr(i,s.size()-i);
			
			temp=a+b;
			if(!mp[temp]){
				count++;
				mp[temp]++;
			}
			temp=b+a;
			if(!mp[temp]){
				count++;
				mp[temp]++;
			}
			reverse(a.begin(),a.end());
			temp=a+b;
			if(!mp[temp]){
				count++;
				mp[temp]++;
			}
			temp=b+a;
			if(!mp[temp]){
				count++;
				mp[temp]++;
			}
			reverse(a.begin(),a.end());
			reverse(b.begin(),b.end());
			temp=a+b;
			if(!mp[temp]){
				count++;
				mp[temp]++;
			}
			temp=b+a;
			if(!mp[temp]){
				count++;
				mp[temp]++;
			}
			reverse(a.begin(),a.end());
			temp=a+b;
			if(!mp[temp]){
				count++;
				mp[temp]++;
			}
			temp=b+a;
			if(!mp[temp]){
				count++;
				mp[temp]++;
			}
		}
		mp.clear();
		cout<<count<<endl;
	}
	return 0;
}