#include<iostream>
using namespace std;

void hikaku(){
	int a[10],yoke;
	for(int i=0;i<10;i++){
		cin>>a[i];
		}
	for(int i=0;i<9;i++){
		for(int n=i+1;n<10;n++){
			if(a[i]<a[n]){
				yoke=a[i];
				a[i]=a[n];
				a[n]=yoke;
				}
			}
		}
	for(int i=0;i<3;i++){
		cout<<a[i]<<endl;
		}
}
int main(){
	hikaku();
	return 0;
	}