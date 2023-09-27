 #include<iostream>
using namespace std;

int main () {
	int a1,a2,a3,a4,b1,b2,b3,b4;
	int Atotal,Btotal;
	cin>>a1>>a2>>a3>>a4>>b1>>b2>>b3>>b4;	
	Atotal=a1+a2+a3+a4;
	Btotal=b1+b2+b3+b4;
	if(Atotal>Btotal){
		cout<< Atotal <<'\n';
	}else{if(Atotal<Btotal){
		cout<< Btotal <<'\n';
	}else{
		cout<< Atotal <<'\n';
	}
}
	return 0;
}