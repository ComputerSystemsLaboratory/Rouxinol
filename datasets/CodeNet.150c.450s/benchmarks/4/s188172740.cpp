#include<iostream>
#include<string>
using namespace std;


int main(){
	int chuukan,kimatsu,sai,goukei;
	while(true){
		
		cin>>chuukan>>kimatsu>>sai;
		goukei = kimatsu+chuukan;
		if(goukei+sai==-3){
			break;
		}
		if(chuukan==-1||kimatsu==-1){
			cout<<"F"<<endl;
		}else if(goukei>=80){
			cout<<"A"<<endl;
		}else if(goukei>=65){
			cout<<"B"<<endl;
		}else if(goukei>=50){
			cout<<"C"<<endl;
		}else if(goukei>=30){
			if(sai>=50){
				cout<<"C"<<endl;
			}else{
				cout<<"D"<<endl;
			}
		}else{
			cout<<"F"<<endl;
		}

	}
}

