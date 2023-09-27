#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
	int n,m,flag=0;
	string str;
	set<string>	st;
	map<string,int>	mp;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> str;
		mp[str]++;
	}
	cin >> m;
	for(int i=0;i<m;i++){
		cin >> str;
		if(mp[str]!=0){
			if(flag){
				cout << "Closed by " << str << endl;
				flag=0;
			}
			else{
				cout << "Opened by " << str << endl;
				flag=1;
			}
		}
		else	cout << "Unknown " << str << endl;
	}
}
