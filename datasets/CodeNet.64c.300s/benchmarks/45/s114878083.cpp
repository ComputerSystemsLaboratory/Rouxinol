#include<iostream>
using namespace std;

int main(){
	int n,m,p;
	int x[100];
	while(cin>>n>>m>>p,n|m|p){
		int s=0;
		for(int i=0;i<n;i++){
			cin>>x[i];
			s+=x[i];
		}
		s*=(100-p);
		if(x[m-1])cout<<s/x[m-1]<<endl;
		else cout<<0<<endl;
	}
	return 0;
}