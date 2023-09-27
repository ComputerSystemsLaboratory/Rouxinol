#include<iostream>
using namespace std;
int main(){
int i,j,k,x,n,A=0;
while(true){
	cin>>n>>x;
	if(n==0&&x==0){break;}
	A=0;
	for(i=1;i<=n;i++){
		for(j=i+1;j<=n;j++){
			for(k=j+1;k<=n;k++){
				if(i+j+k==x){
					A++;
				}
			}
		}
	}
	cout<<A<<endl;
}
	return 0;
}