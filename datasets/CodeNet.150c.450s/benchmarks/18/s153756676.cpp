#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	int debt=100000;
	cin>>n;
	for(i=0;i<n;i++){
		debt=(double)debt*1.05;
		if((int)debt/1000*1000!=(int)debt){
			debt=(int)debt/1000*1000+1000;
		}
	}
	cout<<debt<<endl;
	return 0;
}