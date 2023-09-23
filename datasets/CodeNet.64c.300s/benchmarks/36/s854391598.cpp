#include<iostream>
using namespace std;
int main(void){
	int i,a[3],tmp,b,c;
	for(i=0;i<3;i++)cin>>a[i];
	for(b=0;b<3;b++){
		for(c=b+1;c<3;c++){
			if(a[b]>a[c]){
			tmp=a[b];
			a[b]=a[c];
			a[c]=tmp;
			}
		}
	}
	cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
	return 0;
}