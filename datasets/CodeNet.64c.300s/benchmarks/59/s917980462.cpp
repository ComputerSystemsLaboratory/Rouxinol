#include<iostream>
using namespace std;
int main(){
	int i,a,b,j,s=0;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		if(b==2||b==3)s++;
		else{
		for(j=2;j*j<b;j++){
			if(b%j==0)break;
			if((j+1)*(j+1)>b)s++;
		}	}
	}
	cout<<s<<endl;
	return 0;
}