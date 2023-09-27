#include<iostream>
using namespace std;

int main(){

	int a[100];
	int list[4]={0,0,0,0};


	for(int i=1;i<=10;i++){

		cin>>a[i];

		if(list[1]<a[i]){
			list[3]=list[2];
			list[2]=list[1];
			list[1]=a[i];
		}

		else if(list[2]<a[i]){
			list[3]=list[2];
			list[2]=a[i];
		}

		else if(list[3]<a[i]){
			list[3]=a[i];
		}

	}
	
	for(int j=1;j<=3;j++){
			cout<<list[j]<<endl;
	}

	return 0;
}