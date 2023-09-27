#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES // for C++  
#include <cmath> 
void call(int n);
using namespace std;
int main(){
	int n;
	int apa[12][10];
	for(int l=0;l<12;l++){
		for(int r=0;r<10;r++){
			apa[l][r]=0;
		}
	}
	cin>>n;
	
	for(int i=0;i<n;i++){
		int t,k,b,h;
		
		cin>>t>>k>>b>>h;
		if(t==1){
				 apa[k-1][b-1]+=h;
		}else if(t==2){
			apa[k+2][b-1]+=h;
		}else if(t==3){
			apa[k+5][b-1]+=h;
				}else if(t==4){
							   apa[k+8][b-1]+=h;
														  }
	}
	for(int l=0;l<12;l++){
		
		for(int r=0;r<10;r++){
			cout<<' '<<apa[l][r];
		}
		cout<<endl;
		
	if((l+1)%3==0 &&l!=11){
		for(int s=0;s<20;s++){
			cout<<'#';
		}
		cout<<endl;
	}}
}
