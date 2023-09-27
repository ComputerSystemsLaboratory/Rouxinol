#include <iostream>
#include <string>
#include <map>
#include <utility>
using namespace std;
map<pair<int,int>,string> mp;
string s[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
int main(){
	int cnt=3;
	for(int i=1;i<=12;i++){
		int days;
		if(i==2)	days=29;
		else if(i&1) 	days=(i<=7?31:30);
		else 		days=(i<=7?30:31);
		for(int j=1;j<=days;j++){
			mp[make_pair(i,j)]=s[cnt++];
			cnt%=7;
		}
	}
	int m,d;
	while(true){
		cin>>m>>d;
		if(m==0)	return 0;
		cout<<mp[make_pair(m,d)]<<endl;
	}
	return 0;
}