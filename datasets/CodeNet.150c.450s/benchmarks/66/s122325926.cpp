#include<iostream>
#include<string>

using namespace std;

int main(){
	int n,m,sum;
	sum=0;
	string S[1000],T;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>S[i];
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>T;
		for(int j=0;j<n;j++){
			if(S[j]==T){
				sum++;
				if(sum%2==0){
					cout<<"Closed by "<<T<<endl;
				}
				else{
					cout<<"Opened by "<<T<<endl;
				}
				goto Exit;
			}
		}
		cout<<"Unknown "<<T<<endl;
Exit:;
	}
	return 0;
}