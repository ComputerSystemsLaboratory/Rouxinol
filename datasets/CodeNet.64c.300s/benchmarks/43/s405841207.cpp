 #include<iostream>
using namespace std;

int main () {
	int a1,a2,a3,a4,b1,b2,b3,b4;
	int S,T;
	cin>>a1>>a2>>a3>>a4>>b1>>b2>>b3>>b4;	
	S=a1+a2+a3+a4;
	T=b1+b2+b3+b4;
	if(S>T){
		cout<< S <<'\n';
	}else{if(S<T){
		cout<< T <<'\n';
	}else{
		cout<< S <<'\n';
	}
}
	return 0;
}