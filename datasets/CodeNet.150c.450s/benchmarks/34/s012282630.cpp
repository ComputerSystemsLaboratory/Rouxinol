#include<iostream>
using namespace std;
int main(){
	int n;
	int d[100];
	d[0]=1;
	d[1]=1;
	d[2]=2;
	for(int i=3;i<100;i++){
		d[i]=d[i-1]+d[i-2]+d[i-3];
	}
	while(1){
		cin>>n;
		if(n==0)
		break;
		cout<<d[n]/365/10+1<<endl;
	}
return 0;
}