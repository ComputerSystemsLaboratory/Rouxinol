#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int n;
long long sum=0,min=1000000,max=-1000000;
cin >>n;
int y;
for( int I=0;I<n;I++){
	cin >> y;
	if(min>y){
		min = y;}
	if(max<y){
		max = y;}
	sum+=y;
}
cout<<min<<" "<<max<<" "<<sum<<endl;
return 0;
}
