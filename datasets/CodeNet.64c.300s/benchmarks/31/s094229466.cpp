#include<iostream>
using namespace std;
int main(void)
{
	int t[31],f[2],a;
	for(int i=1;i<31;i++){
		t[i]=0;
	}
	
	for(int i=1;i<29;i++){
		cin>>a;
		t[a]=a;
	}
	
	for(int i=1;i<31;i++){
		if(t[i]==0){
			cout<<i<<"\n";
		}
	}
	
	return 0;
}