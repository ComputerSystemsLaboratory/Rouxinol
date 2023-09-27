#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES // for C++  
#include <cmath> 
using namespace std;
int main(){
	long n,min,max,sum;
	min=1000000;
	max=-1000000;
	sum=0;
	
	cin>>n;
	
	int a[n];
	
	for(int o=0;o<n;o++){
		cin>>a[o];
		
	}
	
	for(int i=0;i<n;i++){
		sum=sum+a[i];
		if(min>a[i]){
		min=a[i];}
		
		if(max<a[i]){
			max = a[i];

		}
	}
	cout<<min<<' '<<max<<' '<<sum<<endl;
	
	
}
