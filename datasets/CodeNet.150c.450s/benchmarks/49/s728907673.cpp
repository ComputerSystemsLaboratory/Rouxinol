#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin>>n,n){
        int s;
        int sum=0;
        int ma=-1;
        int mi=10000;
        for(int i=0;i<n;i++){
            cin>>s;
            ma=max(ma,s);
            mi=min(mi,s);
            sum+=s;
        }
        sum-=mi+ma;
        cout<<sum/(n-2)<<endl;

    }


}