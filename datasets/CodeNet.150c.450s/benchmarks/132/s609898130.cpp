#include<iostream>
using namespace std;
int main(){
	int n,p;
	while(cin>>n>>p){
		bool f=true;
		int d[55]={};
		int cn=p;
		if(n==0)break;
		while(f){
			for(int i=0;i<n;i++){
				if(cn>0){
					d[i]++;
					cn--;
				}
				else if(cn==0){
					cn=d[i];
					d[i]=0;
				}
				if(d[i]==p){
						cout<<i<<endl;
						f=false;
						break;
				}
			}
		}
	}
	return 0;
}