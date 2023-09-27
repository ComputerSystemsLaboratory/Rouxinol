#include <iostream>

using namespace std;

int main(){
	
	int a,b;
	int  s,k;
	
	while(cin>>a>>b){
	s=a+b;
		k=0;
	while(s!=0){
	s=s/10;
	k++;
	}
		cout<<k<<endl;
	}
	}