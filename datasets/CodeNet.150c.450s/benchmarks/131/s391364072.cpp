#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main (void){
    int a[21]={},n[7],L;

    while(cin>>a[0]>>L, a[0]|L){
        int i=0;
        bool notFound=true;
        while(notFound){
            /*??????????????????*/
            n[0]=a[i];
            rep(k,L){
                n[k+1]=n[k]/10;
                n[k]%=10;
            }

            /*??????*/
            sort(n,n+L);

            /*a[i] = ????????§????????´??° - ???????°?????????´??°*/
            a[++i]=0;
            rep(k,L){
                a[i]*=10;
                a[i]+=n[L-1-k]-n[k];
            }

            /*a[i]=a[j]?????????????????????*/
            rep(j,i){
                if(a[i]==a[j]){
                    cout<<j<<" "<<a[i]<<" "<<i-j<<endl;
                    notFound = false;
                    break;
                }
            }
        }
    }

    return 0;
}