#include<iostream>
using namespace std;
int main(){
	while(1){
	int n,x;
	cin>>n>>x;
	if(n==0&&x==0)break;
	int c=0;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			for(int z=j+1;z<=n;z++){
				if(i!=j&&j!=z&&i!=z&&i+j+z==x){
					c++;
				}
			}
		}
	}
	cout<<c<<endl;
	}
}