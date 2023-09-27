#include<iostream>
using namespace std;
int main(){
	int a,b,c,d=0;
	cin>>a>>b>>c;
	for(;a<=b;a++){
		if(c%a==0){
			d+=1;
		}
			
		}
	cout<<d<<endl;
	return 0;
}