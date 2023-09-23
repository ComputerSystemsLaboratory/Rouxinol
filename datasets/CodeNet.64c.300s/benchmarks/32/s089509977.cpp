#include<iostream>
using namespace std;
int main(){
	long a,min,max,d=0;
	cin>>a;
	int b[10000];
	cin>>b[0];
	min=b[0];
	max=b[0];
	d=b[0];
	for(int i=1;i<a;i++){
		cin>>b[i];
		if(min>b[i])min=b[i];
		if(max<b[i])max=b[i];
		d=d+b[i];
	}
	cout<<min<<" "<<max<<" "<<d<<endl;
}