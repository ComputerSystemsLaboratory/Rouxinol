#include<iostream>
using namespace std;

int main()
{
	int m,f,r,t;
	do{
		cin>>m>>f>>r;
		if(m==-1&&f==-1&&r==-1)
			break;
		if (m==-1 || f==-1){
			cout<<"F"<<endl;
		}
		else{
			t=m+f;
			if (t>=80)
				cout<<"A"<<endl;
			else if (t>=65)
				cout<<"B"<<endl;
			else if(t>=50)
				cout<<"C"<<endl;
			else if(t>=30){
				if(r>=50)
					cout<<"C"<<endl;
				else
					cout<<"D"<<endl;	
			}
			else
				cout<<"F"<<endl;			
		}
		
	} while (true);
	return 0;
}
