#include <iostream>
using namespace std;
int main(){
	int n,s=100000;
	cin>>n;
	for(int i=0;i<n;i++){
		s*=1.05;
		if(s%1000!=0){
			s/=1000;
			s*=1000;
			s+=1000;
		}
	}
	cout<<s<<endl;
	cin>>n;
	return 0;
}