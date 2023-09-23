#include <iostream>
#include <cmath>
//#include <string>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int vec[n][m];
    int vec2[m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    
    for(int i=0;i<m;i++){
        cin>>vec2[i];
    }
    
    for(int i=0;i<n;i++){
        int ans=0;
        
        for(int j=0;j<m;j++){
            //cout<<vec[i][j]<<vec2[j]<<endl;
            ans+=vec[i][j]*vec2[j];
            //cout<<ans<<endl;
        }
        
        cout<<ans<<endl;
    }
    return 0;
}

