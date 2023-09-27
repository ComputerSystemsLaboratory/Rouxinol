#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    while(cin>>n>>k){
        int total[100010]={0},ip[100010]={0};
        if(n==0 && k==0)break;
        for(int i=0;i<n;i++){
            cin>>ip[i];
            if(i==k-1){
                for(int j=0;j<k;j++){
                    total[i]+=ip[i-j];
                }
            }
            if(i>k-1){
                total[i]=total[i-1]-ip[i-k]+ip[i];
            }
        }
        sort(total, total+n, greater<int>());
        cout<<total[0]<<endl;
    }
    return 0;
}