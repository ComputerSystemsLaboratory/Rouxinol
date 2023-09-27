#include<iostream>
using namespace std;
int main(){
  
	int a,b,i,c;
	char op;
	

	for(i=1;op!='?';i++){
	cin>>a>>op>>b;
		if(op!='?'){
			if(op=='+'){
				c=a+b;
				cout<<c<<endl;
			}
			if(op=='-'){
				c=a-b;
				cout<<c<<endl;
			}
			if(op=='*'){
				c=a*b;
				cout<<c<<endl;
			}
			if(op=='/'){
				c=a/b;
				cout<<c<<endl;
			}
		}	
	}
	return 0;
}