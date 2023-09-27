#include<iostream>
#include<bitset>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
const int bits=200;

int main(){
	int n,q;
	cin>>n;
	int *A=new int[n];
	for(int i=0;i<n;++i)cin>>A[i];
	
    int max=pow(2,n);
    int *B=new int[max];
	for(int i=1;i<max;++i){
       
		 bitset<20> t;
         t =i;
         int sum=0;
         for(int j=0;j<20;++j){
         	if(t[j]==1)sum+=A[j];
         }
         B[i-1]=sum;
   	}
    
	cin>>q;
	int m;
	for(int i=0;i<q;++i){
		cin>>m;
		int j=0;
		for(;j<max;++j){
			if(B[j]==m){
				cout<<"yes"<<endl;
				break;
			}
			
		}
		if(j==max)cout<<"no"<<endl;
	}
	
   
}
