#include<iostream>
using namespace std;
int main(){
	int n,x;

while(true){

	cin>>n>>x;
	if(n==0&&x==0)break;
		int count=0;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			for(int l=j+1;l<=n;l++){
		//	cout<<i<<" "<<j<<" " <<l<<endl;
				int s=i+j+l;
				if(s==x)count++;
				else if(s>x)break;
			}
		
		}
	
	}
	cout<<count<<endl;
}
 return 0;
}