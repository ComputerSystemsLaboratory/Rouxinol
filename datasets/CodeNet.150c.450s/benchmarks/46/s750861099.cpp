#include <iostream>
using namespace std;

int main() {
	for(;;){
		int n,x,ans=0;
		cin>>n>>x;	//n???3??\???100??\???
		if(n==0&&x==0)break;
		
		for(int i=1;i<=n-2;i++){
			for(int j=i+1; j<=n-1; j++){
				for(int k=j+1; k<=n; k++){
					if(i+j+k==x)ans+=1;
					
					
				}
			}
			
		}
			
	
	cout<<ans<<endl;
	}

	return 0;
}