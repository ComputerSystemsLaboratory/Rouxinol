#include <iostream>
using namespace std;

int main(){
	int n,x;
	refrain:
	cin>>n;
	cin>>x;
	if(n==0&&x==0) return 0;
	int count=0;
	for(int i=1;i<=n-2;i++){
		for(int j=i+1;j<=n-1;j++){
			for(int k=j+1;k<=n;k++){
				if(i+j+k==x) count++;
			}
		}
	}
	cout<<count<<endl;
	goto refrain;
}