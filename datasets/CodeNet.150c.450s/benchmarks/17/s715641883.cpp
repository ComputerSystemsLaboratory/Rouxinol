#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long a[5],i;
	for(i=0;i<5;i++)cin>>a[i];
	for(i=1;i<5;i++)if(a[0]<a[i])swap(a[0],a[i]);
	for(i=2;i<5;i++)if(a[1]<a[i])swap(a[1],a[i]);
	for(i=3;i<5;i++)if(a[2]<a[i])swap(a[2],a[i]);
	if(a[3]<a[4])swap(a[3],a[4]);
	for(i=0;i<5;i++){
		if(i==4){
			cout<<a[i];
		}else{
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
	return 0;
}