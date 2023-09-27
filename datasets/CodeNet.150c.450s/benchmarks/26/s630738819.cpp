#include<iostream>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	if (a>b){
		cout<<"a > b"<<endl;
		return 0;
	}else if(a<b){
		cout<<"a < b"<<endl;
		return 0;
	}else{
		cout << "a == b"<<endl;
		return 0;
	}

	return 0;
}