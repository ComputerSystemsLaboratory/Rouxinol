#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	
	int c[6]={500,100,50,10,5,1};
	int n;
	
	
	while(cin>>n){
		if(n!=0){
		int k=0;
		int s=0;
		n=1000-n;
	
	while(n>0){
		if(n-c[k]>=0){
			n=n-c[k];
			s++;
		}
		else
			k++;
	}
			cout<<s<<endl;
	}
	
	else
		break;
	}
	
}