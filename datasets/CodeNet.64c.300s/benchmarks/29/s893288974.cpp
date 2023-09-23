#include<iostream>
using namespace std;
int e,x,y,MIN,i,j;
int main(){
	while(true){
		MIN=1<<27;
		cin>>e;if(!e){break;}
		for(i=0;i*i*i<=e;i++){
			for(j=0;j*j+i*i*i<=e;j++){
				MIN=min(MIN,i+j+e-(i*i*i+j*j));
			}
		}
		cout<<MIN<<endl;
	}
}