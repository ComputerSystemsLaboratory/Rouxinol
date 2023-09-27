#include <iostream>
using namespace std;
int n,U,D,ans;
string s;
int main(void){
    while(1){
        U=0,D=0,ans=0;
        cin>>n;
        if(n==0)return 0;
        for(int i=0;i<n;i++){
            cin>>s;
            if(s=="lu"||s=="ru"){
                if(U==1){
                    U=0;
                    ans++;
                }
                else U=1;
                D=0;
            }
            else{
                if(D==1){
                    D=0;
                    ans++;
                }
                else D=1;
                U=0;
            }
            
        }
        cout<<ans<<endl;
    }
}

