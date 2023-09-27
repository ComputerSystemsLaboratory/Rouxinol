#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
int main(){
	int n,r;
	while(cin>>n>>r,n,r){
		int data[50],tmp[50];
		for(int i=0;i<n;i++){
			data[i]=n-i;
			tmp[i]=n-i;
		}
		for(int i=0;i<r;i++){
			int p,c;
			cin>>p>>c;
			for(int j=0;j<p+c-1;j++){
				if(j<p-1){
					tmp[j+c]=data[j];
				}else{
					tmp[j-p+1]=data[j];
				}
			}
			for(int j=0;j<n;j++){
				data[j]=tmp[j];
			}
		}
		cout<<data[0]<<endl;
	}
}