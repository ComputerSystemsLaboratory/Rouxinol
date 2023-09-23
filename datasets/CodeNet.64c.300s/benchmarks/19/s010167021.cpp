#include <iostream>
using namespace std;
int main(){
	int n,a[5001],s,m;
	while(1){
		cin>>n;
		if(!n)break;
		for(int i=0;i<n;i++)cin>>a[i];
		m=-10000000;
		for(int i=0;i<n;i++){
			s=0;
			for(int j=i;j>=0;j--){
				s+=a[j];
				if(s>m)m=s;
			}
		}
		cout<<m<<endl;
	}
	return 0;
}