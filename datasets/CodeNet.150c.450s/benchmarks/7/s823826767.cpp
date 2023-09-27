#include<iostream>
using namespace std;
int main() {
	int a[11],b;
	for(int y=0;y<10;y++){
		cin>>a[y];
	}
	for(int y=0;y<10;y++){
		for(int i=y+1;i<10;i++){
			if(a[y]<a[i]){
				b=a[y];
				a[y]=a[i];
				a[i]=b;
			}
		}
	}
	for(int y=0;y<3;y++){
		cout<<a[y]<<endl;
	}
return 0;
}
