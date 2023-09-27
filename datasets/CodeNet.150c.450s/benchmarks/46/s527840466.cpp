#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main(){

    while(true){
        
        int n,x;
        int ans=0;
        cin>>n>>x;
        if(n==0&&x==0)break;
        
        for(int i=1;i<=n-2;i++){
            for(int j=i+1;j<=n-1;j++){
                for(int u=j+1;u<=n;u++){
                    int p=i+j+u;
                    if(p==x){
                        ans++;
                       // cout<<i<<j<<u<<endl;
                    }
                }
            }
        }
        
        cout<<ans<<endl;
        
        
        
    }
	
	return 0;
	
}
