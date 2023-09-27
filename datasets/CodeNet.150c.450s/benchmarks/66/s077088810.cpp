#include<iostream>
#include<set>
#include<string>
using namespace std;
set<string>data;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		data.insert(str);
	}
	int m;
	cin>>m;
	int now=1;
	for(int i=0;i<m;i++){
		string str;
		cin>>str;
		if(data.find(str)!=data.end()){
			if(now==1)cout<<"Opened by "<<str<<endl;
			else cout<<"Closed by "<<str<<endl;
			now*=-1;
		}
		else cout<<"Unknown "<<str<<endl;
	}
}