#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int D;
    while(cin>>D){
        int d=D;
        int ans=0;
        for(int i=600;i>0;i-=D){
            d-=D;
            ans+=pow(d,2)*D;
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}
