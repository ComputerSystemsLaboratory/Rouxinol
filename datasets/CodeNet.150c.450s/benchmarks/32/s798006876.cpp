#include<iostream>

using namespace std;
const int MAX_N=1e3;
int data[MAX_N];
int main(){
	int m,nmi,nma;
	while(cin>>m>>nmi>>nma && nmi!=0){
		for(int i=0;i<m;i++)cin>>data[i];
		int ma=0;
		int ans=0;
		for(int i=nmi-1;i<nma;i++){
			if(ma<=data[i]-data[i+1]){
				ans=i+1;
				ma=data[i]-data[i+1];
			}
		}
		cout<<ans<<endl;
	}
}