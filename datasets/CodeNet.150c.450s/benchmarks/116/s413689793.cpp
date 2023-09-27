#include<bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        int ans=0,n,k,box[100005]={0},sum=0;;
        cin >> n >> k;
        if(n==0&&k==0)break;
        for(int i=0;i<k;i++){
            cin >> box[i];
            sum+=box[i];
            }
            ans=sum;
          for(int i=k;i<n;i++){
                cin >> box[i];
                sum+=box[i]-box[i-k];
                if(sum>ans)ans=sum;
        }
    cout << ans <<endl;
    }
    return 0;
}