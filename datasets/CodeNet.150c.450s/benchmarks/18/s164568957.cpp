#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
int n;
long long int x=100000;
cin>>n;

for (int i=0;i<n;i++){
	x*=1.05;
	x=ceil((double)x/1000)*(1000);
}
cout<<x<<endl;
}