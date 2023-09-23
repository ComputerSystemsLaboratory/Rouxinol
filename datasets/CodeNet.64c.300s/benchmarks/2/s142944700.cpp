#include<iostream>
 
using namespace std;
 
int main(){
	int a,b,c;
	int p;
	while(1){
		cin>>a>>b>>c;

		p = a+b;

		if(a==-1 && b==-1 && c==-1)
			break;

		if(a==-1){
			cout<<"F"<<endl;
			continue;
		}
	
		if(b==-1){
			cout<<"F"<<endl;
			continue;
		}
		
		if(80<=p)
			cout<<"A";
		else if(65<=p && p<80)
			cout<<"B";
		else if(50<=p && p<65)
			cout<<"C";
		else if(30<=p && p<50)
			if(50<=c)
				cout<<"C";
			else
				cout<<"D";
		else
			cout<<"F";		

		cout<<endl;


	}
	return 0;
}