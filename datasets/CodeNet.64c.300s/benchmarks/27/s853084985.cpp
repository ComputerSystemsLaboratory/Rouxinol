#include<iostream>
using namespace std;
int main(){
	int n,x,i,j,l,count=0;
	for(;;){
	cin>>n>>x;
	if(n==0&&x==0){
	break;
	}
	for(i=1;i<=n;i++){
		for(j=i+1;j<=n;j++){
			for(l=j+1;l<=n;l++){
			if(i+j+l==x){
				count++;
			}
			}
		}
	}
	cout<<count<<endl;
	count=0;
	}
return 0;
}