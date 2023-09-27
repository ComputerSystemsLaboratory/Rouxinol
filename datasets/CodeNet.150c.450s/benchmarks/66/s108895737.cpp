#include <bits/stdc++.h>
using namespace std;
int main(){
	string data[256],id;
	bool door=false;
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>data[i];
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>id;
		bool f=false;
		for(int j=0;j<n;j++){
			if(id==data[j]){
				f=true;
				if(door){
					door=false;
					cout<<"Closed by "<<id<<endl;
					break;
				}else{
					door=true;
					cout<<"Opened by "<<id<<endl;
					break;
				}
			}
		}
		if(!f)cout<<"Unknown "<<id<<endl;
	}
}