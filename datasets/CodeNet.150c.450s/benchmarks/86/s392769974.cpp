#include <bits/stdc++.h>
using namespace std;
#define rep1(i,n) for(int i=1;i<=n;++i)

int main(void){
    int N,M,P,X;
    while(cin>>N>>M>>P, N|M|P){
        int sum=0,winner;
        rep1(i,N){
            cin>>X;
            sum+=X;
            if(i==M)winner=X;
        }
        if(winner)cout<<sum*(100-P)/winner<<endl;
        else cout<<0<<endl;
    }

    return 0;
}