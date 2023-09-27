#include<iostream>
#include<string>
using namespace std;
int main(){
	while(1){
		int m,n;
		char cha[100000],con[100000],a[100000];
		cin>>m;
		if(m==0)break;
		for(int i=0;i<m;i++){
			cin>>cha[i]>>con[i];
		}
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			for(int j=0;j<m;j++){
				if(a[i]==cha[j]){
					a[i]=con[j];
					break;
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i];
		}
		cout<<"\n";
	}
	return 0;
}