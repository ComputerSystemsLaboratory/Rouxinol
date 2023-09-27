#include <bits/stdc++.h>
using namespace std;
#define rep(i,n)	for(int i=0;i<n;i++)

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	set<string> dic;
	int n;	cin>>n;
	string com,key;
	while(n--){
		cin>>com>>key;
		if(com=="insert")	dic.insert(key);
		else{
			if(dic.find(key)==dic.end())	cout<<"no"<<endl;
			else 	cout<<"yes"<<endl;
		}	
	}
	return 0;
}
			