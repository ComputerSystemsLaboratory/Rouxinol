#include <iostream>
using namespace std;
int main(){
	int m,f,r,sum;
	while(1){
		cin>>m>>f>>r;
		sum=m+f;
		if(m==-1&&f==-1&&r==-1){
			break;
		}
		else if(m==-1||f==-1){
			cout<<"F";
		}
			else if(sum>=80){
				cout<<"A";
			}
			else if(sum>=65){
				cout<<"B";
			}
			else if(sum>=50){
		         cout<<"C";
			}
			else if(sum>=30){
			if(r>=50){
				cout<<"C";
			}
			else {
				cout<<"D";
			}
			}
			else {
				cout<<"F";
	}
			cout<<endl;
	}
	return 0;
}