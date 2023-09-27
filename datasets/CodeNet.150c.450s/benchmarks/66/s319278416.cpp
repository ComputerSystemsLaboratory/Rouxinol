#include <iostream>
#include <string>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)

map<string,int> ma;

int main(){
	int n,m;
	cin>>n;
	rep(i,n){
		string tmp;
		cin>>tmp;
		ma[tmp]=1;
	}
	cin>>m;
	int lock=0;
	rep(i,m){
		string tmp;
		cin>>tmp;
		if(ma[tmp]==1){
			if(lock==0){
				cout<<"Opened by ";
				lock=1;
			}
			else{
				cout<<"Closed by ";
				lock=0;
			}
		}
		else{
			cout<<"Unknown ";
		}
		cout<<tmp<<endl;
	}
}