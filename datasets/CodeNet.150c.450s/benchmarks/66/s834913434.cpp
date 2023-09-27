#include<bits/stdc++.h>
using namespace std;

int main(){
	map<string,int> M;

	int n;	cin>>n;
	vector<string> ID(n);
	for(int i=0;i<n;i++){
		cin>>ID[i];
	}

	bool opened=false;

	int m;	cin>>m;
	string t;
	for(int i=0;i<m;i++){
		cin>>t;
		bool flag=false;

		for(int i=0;i<n;i++){
			if(ID[i]==t){
				flag=true;
				if(opened){
					opened=false;
					cout<<"Closed by ";
				}else{
					opened=true;
					cout<<"Opened by ";
				}
				cout<<t<<endl;
				break;
			}
		}
		if(flag==false){
			cout<<"Unknown "<<t<<endl;
		}
	}


	return 0;
}

