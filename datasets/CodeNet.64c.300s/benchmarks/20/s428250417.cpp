#include<iostream>
using namespace std;
int main(){
	int a,i,j,k;
	int s=0;
	while(cin>>a){
		for(i=a;i<600;i+=a){
			s+=i*i*a;
		}
		cout<<s<<endl;
		s=0;
	}
	return 0;
}