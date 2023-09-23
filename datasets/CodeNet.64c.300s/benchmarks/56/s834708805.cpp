#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<cstring>
using namespace std;

int main(){
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		int y,m,d,j,k,sum=0;
		cin>>y>>m>>d;
		if(y%3==0){
			sum-=(m-1)*20;
			sum-=d-1;
		}else{
			for(;m>1;m--){
				if(m%2==0){
					sum-=20;
				}else{
					sum-=19;
				}
			}
			sum-=d-1;
		}
		for(;y<1000;y++){
			if(y%3==0){
				sum+=200;
			}else{
				sum+=195;
			}
		}
		cout<<sum<<endl;
	}
    return 0;
}