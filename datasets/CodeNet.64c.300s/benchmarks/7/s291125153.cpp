#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES // for C++  
#include <cmath> 
void call(int n);
using namespace std;
int main(){
	int n,nm;
	char l;
	int T[52];//0-12:S 13-25:H 26-38:C 39-51:D
	for(int i =0;i<52;i++){
		T[i]=0;
	}
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>l>>nm;
		if(l=='S'){
			T[nm-1]=1;
		}else if(l=='H'){
			T[nm+12]=1;
		}else if(l=='C'){
			T[nm+25]=1;
		}else if(l=='D'){
			T[nm+38]=1;
		}
	}	
	
	for(int i=0;i<52;i++){
		if(T[i]==0){
			if(i<13){
				cout<<"S "<<i+1<<endl;
			}else if(i<26){
				cout<<"H "<<i+1-13<<endl;
			}else if(i<39){
				cout<<"C "<<i+1-26<<endl;
			}else if(i<52){
				cout<<"D "<<i+1-39<<endl;
			}
		}
		
	}
	
	
}
