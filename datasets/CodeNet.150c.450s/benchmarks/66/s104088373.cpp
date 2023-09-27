#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,m;
	bool l=0,flg=0;
	cin>>n;
	string str[n],s;
	for(int i=0;i<n;i++) cin>>str[i];
	cin>>m;
	for(int i=0;i<m;i++){
		flg=0;
		cin>>s;
		for(int j=0;j<n;j++){
			if(s==str[j]){
				flg=1;
				if(l){
					cout<<"Closed by "<<s<<endl;
					l=0;
				}else{
					cout<<"Opened by "<<s<<endl;
					l=1;
				}
				break;
			}
		}
		if(flg==0) cout<<"Unknown "<<s<<endl;
	}
	return 0;
}