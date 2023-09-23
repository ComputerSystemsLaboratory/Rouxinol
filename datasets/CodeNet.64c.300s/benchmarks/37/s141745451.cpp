#include<iostream>
using namespace std;
#include<vector>

int main(){
	while(1){
		int n;
		cin>>n;
		if(n==0)break;
		
		int ans=0;
		
		for(int i=2;i<=(n/2)+1;i++){
			if(i%2==0){
				if(n%i==i/2){
					if(n/i-(i/2)>-1){
						ans++;
						//cout<<i<<endl;
					}
				}
			}else{
				if(n%i==0){
					if(n/i-(i/2)>0){
						ans++;
						//cout<<i<<endl;
					}
				}
			}
		}
		
		cout<<ans<<endl;
	}
	return 0;
}