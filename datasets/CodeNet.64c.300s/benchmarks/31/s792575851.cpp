#include<iostream>
using namespace std;
int main(){
	int a[28];
	int b[2];
	int s=0;
	int t=0;
	int i=0;
	int j=0;
	for(i=0;i<28;i++){
		cin>>a[i];
	}
	for(i=1;i<31;i++){
		for(j=0;j<28;j++){
			if(i==a[j]){
				t=1;
			}
		}
		if(t!=1){
			b[s]=i;
			s=s+1;
		}
		t=0;
	}
	cout<<b[0]<<endl;
	cout<<b[1]<<endl;
}