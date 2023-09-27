#include<iostream>
#include<algorithm>
using namespace std;
int a[4],b[4],c,d;
int main(){
	c=0;d=0;
	for(int i=0;i<4;i++){cin>>a[i];c+=a[i];}
	for(int i=0;i<4;i++){cin>>b[i];d+=b[i];}
	cout<<max(c,d)<<endl;
	return 0;
}