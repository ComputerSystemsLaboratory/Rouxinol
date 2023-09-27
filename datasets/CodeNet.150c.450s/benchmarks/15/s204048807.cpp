#include <iostream>
#include <string> 
using namespace std;
int main(){
    int n,q,count=0; cin>>n;
    long long S[10001],T[501];
    for(int i=0;i<n;i++) cin>>S[i];
    cin>>q; bool x =false;
    for(int j=0;j<q;j++) cin>>T[j];
    for(int j=0;j<q;j++){
        x=false;
        for(int i=0;i<n;i++){
            if(S[i]==T[j]&&x==false){
                count++; x=true;
            }
            
        }
    }
    cout<<count<<endl;
}
