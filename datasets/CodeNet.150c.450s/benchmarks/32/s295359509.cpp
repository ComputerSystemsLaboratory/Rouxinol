#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <math.h>

using namespace std;
int p[201];
int m,mi,ma;
int gap=0,ans;
int solve(){
    for(int i=0;i<m;i++){
        
        cin>>p[i];
        
        }
     for(int i=mi-1;i<ma;i++){
            if(gap<=p[i]-p[i+1]){
            //cout<<p[i]<<"  "<<i+1<<endl;
                gap=max(gap,p[i]-p[i+1]);
                ans=i+1;
            }
            
        }
        return 0;

}
int main()
{
   
   while(1){
    cin>>m>>mi>>ma;
    gap=0;
    
    if(m==0)return 0;
    solve();
    cout<<ans<<endl;
   }return 0; 
}

