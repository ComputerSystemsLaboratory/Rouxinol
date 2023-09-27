#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES // for C++  
#include <cmath> 
void call(int n);
using namespace std;
int main(){
	int N,m;
	m=0;
	cin>>N;
	int ko[N];
	
	if(N>=10000){
		N=10000;
	}
	for(int i=3;i<N+1;i++){
		
		if(i%3 == 0){
			ko[m]=i;
			m++;
			
		}else if(i%10 == 3){
			ko[m]=i;
			m++;
		}else if((i/10)%10 ==3){
			ko[m]=i;
			m++;
		}else if((i/100)%10 ==3){
			ko[m]=i;
			m++;
		}else if((i/1000)%10 ==3){
			ko[m]=i;
			m++;
		}else if((i/10000)%10 ==3){
			ko[m]=i;
			m++;
		}
	}
	for(int o = 0;o<m;o++){
		
		cout<<' '<<ko[o];
	}
	
	cout<<endl;
}
