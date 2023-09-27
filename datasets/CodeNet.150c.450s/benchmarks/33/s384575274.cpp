#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<cmath>
#include<numeric>
#include<cstdlib>
#include<cassert>
using namespace std;




int main(){
    while(1){
    
    int x,y,s;
    cin>>x>>y>>s;
        if(x==0 && y==0 && s==0){break;}
    x+=100;
    y+=100;
    int ans=0;
    for(int i=s-1;i>0;i--){
        if(i*x/100<=s){
            for(int t=i;t>0;t--){
                if(i*x/100+t*x/100==s){
                    ans=max(ans,i*y/100+t*y/100);
                }
            }
        }
    }
    
    cout<<ans<<endl;
    
    }
    
    return 0;
}

