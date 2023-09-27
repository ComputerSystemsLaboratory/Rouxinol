#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,m;
	string u[256];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>u[i];
	bool door=true;
	string a;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>a;
		bool t=false;
		for(int j=0;j<n;j++){
			if(u[j]==a){
				t=true;
				if(door==true){
					cout<<"Opened by "<<a<<endl;
					door=false;
				}
				else{
					cout<<"Closed by "<<a<<endl;
					door=true;
				}
			}
		}
		if(t==false)
			cout<<"Unknown "<<a<<endl;
	}
    return 0;
}