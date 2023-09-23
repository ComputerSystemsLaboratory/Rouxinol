#include<iostream>
using namespace std;

int main(){
	bool p[1000000];
	int num[1000000];
	int c,n;
	
	for(int i=0;i<1000000;i+=2)p[i] = false ;

	for(int i=1;i<1000000;i+=2)p[i] = true ;
	
	p[1] = false;
	p[2] = true;
	
	c=3;
	while(c < 1000){
		for(int i=3*c; i < 1000000; i+=2*c)p[i] = false;
		do{c+=2;}while(!p[c]);
	}
	
	c=0;
	for(int i = 0 ; i < 1000000 ; i++){
		if(p[i])c++;
		num[i] = c;
	}
	
	while(cin>>n)cout<<num[n]<<endl;
}