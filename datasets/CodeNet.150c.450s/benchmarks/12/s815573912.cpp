using namespace std;
#include<iostream>
#include<stdio.h>

int main(){
int x;
cin >>x;
int a[x];

for (int j =1;j<=x;j++) cin>>a[j];

for (int i=1;i<=x;i++){
	cout<<"node "<<i<<": key = "<<a[i]<<", ";
	if(i>1) cout<<"parent key = "<<a[i/2]<<", ";
	if(i*2<=x)	cout<<"left key = "<<a[i*2]<<", ";
	if((i*2)+1<=x)	cout<<"right key = "<<a[(i*2)+1]<<", ";
cout<<endl;
}



	return 0;
}
