#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b;
while (cin>>a>>b){
	int n=a+b;
	 if(n>999999){
		cout<<7<<endl;
	}
	else if (n>99999){	
	cout<<6<<endl;
}
	else if(n>9999){
		cout<<5<<endl;
	}
		else if(n>999){
		cout<<4<<endl;
	}
		else if(n>99){
		cout<<3<<endl;
		}
		else if(n>9){
		cout<<2<<endl;
	}
	else{ 
	cout<<1<<endl;
	}
	}
}

