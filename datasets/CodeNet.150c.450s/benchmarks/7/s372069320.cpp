#include <iostream>
using namespace std;
int main(){
	int a[10];
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	for(int s=0;s<10-1;s++){
		for(int t=s+1;t<10;t++){
			if(a[t]>a[s]){
				int p=a[t];
				a[t]=a[s];
				a[s]=p;
			}
		}
	}
	for(int j=0;j<3;j++){
		cout<<a[j]<<endl;
	}
}