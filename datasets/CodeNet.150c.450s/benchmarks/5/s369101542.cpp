#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES // for C++  
#include <cmath> 
void call(int n);
using namespace std;
int main(){
	int n;
	cin>>n;
	int N[n];
	for(int i=0;i<n;i++){
		cin>>N[i];
	}
	
	for(int j=n-1;j>=0;j--){
		cout<<N[j];
		if(j!=0){cout<<' ';}
	}
	cout<<endl;
}
