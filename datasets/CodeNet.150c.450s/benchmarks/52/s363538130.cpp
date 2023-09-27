#include<bits/stdc++.h>
using namespace std;
int main()
{
    int train[10000],moving,situation=0,ans[10000],n=0,ende=0;
    while(cin>>moving){
        if(moving!=0){
            train[situation]=moving;
            situation++;
        }
        else {
                situation--;
                ans[ende]=train[situation];
                ende++;
        }
    }
    for(int i=0;i<ende;i++)cout<<ans[i]<<endl;

}