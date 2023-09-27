#include<iostream>
using namespace std;
int main(){
	int a[5];
	cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
	for(int i=0; i<5; i++){
		for(int l=0; l<4; l++){
			if(a[l]<a[l+1]){
				int c = a[l];
				a[l] = a[l+1];
				a[l+1] = c;
			}
		}
	}
	cout <<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
	return 0;
}