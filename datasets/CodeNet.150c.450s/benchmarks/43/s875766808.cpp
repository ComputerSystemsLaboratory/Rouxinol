#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,a[10000],b[10000],countA,countB;
    while(cin>>n,n!=0){
        countA=0,countB=0;
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
            if(a[i]>b[i]){
                countA+=(a[i]+b[i]);
            }else if(a[i]<b[i]){
                countB+=(a[i]+b[i]);
            }else{//a[i]==b[i]
                countA+=a[i];
                countB+=b[i];
            }
        }
        cout<<countA<<" "<<countB<<endl;
    }
    return(0);
}