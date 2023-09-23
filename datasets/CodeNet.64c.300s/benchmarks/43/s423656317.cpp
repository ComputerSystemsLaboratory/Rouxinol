#include<iostream>
using namespace std;

int main(){
	int a[4];
	int b[4];
	int i=0;
	int s=0;
	int t=0;
	
	for(i=0;i<4;i++){
		cin>>a[i];
		s=s+a[i];
	}
	
	for(i=0;i<4;i++){  
		cin>>b[i];
		t=t+b[i];
	}
	
	if(s<t){
		cout<<t<<endl;
	}else{
		cout<<s<<endl;
	}
}	
	
	
	
	
	
	
	 