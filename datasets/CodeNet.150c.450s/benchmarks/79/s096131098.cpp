#include<iostream>
using namespace std;
int main(){
	int huda[101];
	int n,r;
	while(cin>>n>>r,n||r){
	int p,c;
	for(int i=0;i<101;i++)huda[i]=i+1;
		for(int i=0;i<r;i++){
			cin>>p>>c;
			for(int j=n-p-c+1;j<n-p+1;j++){
				//for(int x=0;x<n;x++)cout<<huda[x]<<" ";cout<<endl;
				int tmp=huda[n-p-c+1];
				for(int k=n-p-c+1;k<n-1;k++){
					huda[k]=huda[k+1];
				}
				huda[n-1]=tmp;
			}
		}
		cout<<huda[n-1]<<endl;
		for(int fjl=0;fjl<101;fjl++)huda[fjl]=0;
	}
	return 0;
}