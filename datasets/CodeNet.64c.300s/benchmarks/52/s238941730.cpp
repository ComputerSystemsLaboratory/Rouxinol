#include<iostream>
using namespace std;
int add(int n, int s, int x, int t);
int main(){
	for(;;){
		int n,s,t=0;
		cin >>n>>s;
		if(n == 0 && s == 0){break;}
		for(int i=0; i<10; i++){
			if(s>=i){t+=add(n-1,s-i,i,0);}
		}
		cout <<t<<endl;
	}
	return 0;
}
int add(int n, int s, int x, int t){
	int k = t;
	if(n == 0 && s == 0){return 1;}
	else if(n == 0 && s != 0){return 0;}
	else{
		for(int i=x+1; i<10; i++){
			if(s>=i){t+=add(n-1,s-i,i,k);}
		}
	}
	return t;
}