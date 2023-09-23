#include<iostream>
#include<string>
using namespace std;
int main(){
	int a[100]={0},b,c=1;
	while(cin>>b){
		a[b-1]++;
		if(a[b-1]>c)
			c=a[b-1];
	}
	for(int i=0;i<100;i++){
		if(a[i]==c)
			cout<<i+1<<endl;
	}
	return 0;
}