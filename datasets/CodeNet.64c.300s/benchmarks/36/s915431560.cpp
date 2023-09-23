#include<iostream>
using namespace std;
int main(){
	int a[3];
	cin>>a[0];
	cin>>a[1];
	cin>>a[2];
	int space;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			if(a[j]>a[j+1]){
				space=a[j];
				a[j]=a[j+1];
				a[j+1]=space;
				j=0;
			}
		}
	}
	cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
}