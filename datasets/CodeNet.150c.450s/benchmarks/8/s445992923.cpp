#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
int i,p=0,q=0;
	cin>>i;
	while(i--){
	string X,Y;
		cin>>X>>Y;
		if(X>Y)p+=3;
		if(X<Y)q+=3;
		if(X==Y){q++;p++;}
		
	}
	cout<< p <<" "<< q << endl;
return 0;
}