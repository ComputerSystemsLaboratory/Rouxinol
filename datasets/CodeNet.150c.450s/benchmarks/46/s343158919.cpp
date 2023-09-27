#include<iostream>
using namespace std;
int main(){
	int n,i,j,k,x,counter=0;
	while(1){
		cin>>n>>x;
		if(n==0 && x==0){
			break;
		}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			for(k=1;k<=n;k++){
			if(i+j+k==x && i!=j && i!=k && j!=k && j!=i && k!=j && k!=i && i<j && j<k  ){
				counter++;
			}
			
		}
	}
	}
	cout<<counter<<endl;
	counter=0;
	}
	return 0;
}