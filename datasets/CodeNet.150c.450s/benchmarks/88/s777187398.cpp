#include<iostream>
using namespace std;

int main(){
	int h,w;
	int min[3];
	while(true){
		cin>>h>>w;
		if(h==0 && w==0){
			break;
		}
		min[0]=1000000000;
		min[1]=1000000000;
		min[2]=1000000000;
		for(int i=1;i<=250;i++){
			for(int j=1;j<=250;j++){
				if((i*i+j*j>h*h+w*w && i<j) && min[0]>i*i+j*j){
					min[0]=i*i+j*j;
					min[1]=i;
					min[2]=j;
				}
				else if((i*i+j*j>h*h+w*w && i<j) && (min[0]==i*i+j*j && min[1]>i)){
					min[0]=i*i+j*j;
					min[1]=i;
					min[2]=j;
				}
				else if(((i*i+j*j==h*h+w*w && i<j) && (h!=i || w!=j)) && h<i){
					if(min[1]>i || min[0]>h*h+w*w){
						min[0]=i*i+j*j;
						min[1]=i;
						min[2]=j;
					}
				}
			}
		}
		cout<<min[1]<<' '<<min[2]<<endl;
	}
	return 0;
}