#include<iostream>
using namespace std;
int main(){
	int n,x,i,j,k,ans1,ways=0;
	for(;;){
		cin>>n>>x;
		if(n==0&&x==0)
			break;
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				for(k=1;k<=n;k++){
					ans1=i+j+k;
					if(ans1==x && i!=k && i!=j && k!=j && i<j && j<k && i<k){
						ways++;
					}
				}
			}
		}
		cout<<ways<<endl;
		ways=0;
	}

	return 0;
}