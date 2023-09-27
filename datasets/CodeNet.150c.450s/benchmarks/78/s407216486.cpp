#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main(){
	int *a=new int[1000000];
	int *b=new int[1000000];
	for(int i=0;i<1000000;i++){
		a[i]=100000;
		b[i]=100000;
	}
	for(int i=1;i<pow(6000000,0.4)+5;i++){
		int aa=(i*(i+1)*(i+2))/6;
		if(aa<1000000){
			a[aa]=1;
		}
	}
	a[0]=0;
	a[2]=2;
	a[3]=3;
	for(int i=4;i<1000000;i++){
		if(a[i]==1){
			for(int j=1;j<=1000000/i+2;j++){
				for(int k=0;k<2*i;k++){
					if(j*i+k<1000000){
						a[j*i+k]=min(a[j*i+k],j+a[k]);
					}
				}
			}
		}
	}
	for(int i=0;i<pow(6000000,0.4)/4+5;i++){
		int bb=((4*i+1)*(4*i+2)*(4*i+3))/6;
		if(bb<1000000){
			b[bb]=1;
		}
	}
	b[0]=0;
	for(int i=2;i<35;i++){
		b[i]=i;
	}
	for(int i=4;i<1000000;i++){
		if(b[i]==1){
			for(int j=1;j<=1000000/i+2;j++){
				for(int k=0;k<3*i;k++){
					if(j*i+k<1000000){
						b[j*i+k]=min(b[j*i+k],j+b[k]);
					}
				}
			}
		}
	}
	int n;
	while(cin>>n){
		if(n==0) break;
		cout<<a[n]<<" "<<b[n]<<endl;
	}
    return 0;
    delete[] a;
    delete[] b;
}