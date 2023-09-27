#include <iostream>
#include <string>
using namespace std;
int main(){
	int n,m,j=0;
	cin>>n;
	string u[n],t;
	for(int i=0;i<n;i++){
		cin>>u[i];
	}
	cin>>m;
	for(int i=0;i<m;i++){
		int a=0;
		cin>>t;
		for(int k=0;k<n;k++){
			if(u[k]==t){
				if(j==0){
					cout<<"Opened by "<<t<<endl;
					j=1;
				}
				else if(j==1){
					cout<<"Closed by "<<t<<endl;
					j=0;
				}
				a=1;
			}
		}
		if(a==0){
			cout<<"Unknown "<<t<<endl;
		}
	}
    return 0;
}