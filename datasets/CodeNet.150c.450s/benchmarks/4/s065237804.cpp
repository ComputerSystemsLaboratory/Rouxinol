#include<iostream>
using namespace std;
int main(){
	int m,f,r,gokei,i;
	i=1;
	while(i=1){
		cin>>m>>f>>r;
		gokei=m+f;
		if(m==-1 && f==-1){
			break;
		}else if(m==-1 || f==-1){
			cout<<"F"<<endl;
		}else{
			if(80<=gokei && gokei<=100){
				cout<<"A"<<endl;
			}else if(65<=gokei && gokei<80){
				cout<<"B"<<endl;
			}else if(50<=gokei && gokei<65){
				cout<<"C"<<endl;
			}else if(30<=gokei && gokei<50){
				if(r>=50){
					cout<<"C"<<endl;
				}else{
					cout<<"D"<<endl;
				}
			}else if(0<=gokei && gokei<30){
				cout<<"F"<<endl;
			}
		}
	}
}