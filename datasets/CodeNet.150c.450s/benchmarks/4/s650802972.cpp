#include <iostream>
using namespace std;

int main(){
	int m, f, r, s;

	while(1){
		cin>>m>>f>>r;
		if(m==-1 && f==-1 && r==-1) break;

		s = m + f;
		if(m==-1 || f==-1)
			cout<<"F"<<endl;
		else if(s>=80)
			cout<<"A"<<endl;
		else if(s<80 && s>=65)
			cout<<"B"<<endl;
		else if(s<65 && s>=50)
			cout<<"C"<<endl;
		else if(s<50 && s>=30){
			if(r>=50) cout<<"C"<<endl;
			else      cout<<"D"<<endl;
		}else if(s<30)
			cout<<"F"<<endl;
	}

	return 0;
}