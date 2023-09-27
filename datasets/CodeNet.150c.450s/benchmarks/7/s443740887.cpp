#include<iostream>
using namespace std;

int main(){
	int a[10];
	int max,max_n;
	for(int i=0;i<10;i++){
	cin>>a[i];
	}
	for(int i=0;i<3;i++){
		max=a[0];
		max_n=0;
	for(int j=0;j<9;j++){
		if(max<a[j+1]){
			max=a[j+1];
			max_n=j+1;
		}
	}
		cout << max <<endl;
		a[max_n]=-1;
	
	}
    return 0;
}