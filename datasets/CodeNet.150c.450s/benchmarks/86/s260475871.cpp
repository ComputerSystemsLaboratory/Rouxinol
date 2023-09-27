#include <bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int n,m,p,luck; cin>>n>>m>>p;

        if(n==0 && m== 0 && p==0 ) break;

        long long sum=0;

        vector<int> x(n);

        for(int i=0; i<n; i++){
            cin>>x[i];
            sum += x[i];
        }

        sum *= (100-p);
        luck = x[--m];
        int  ans=0;

        if(luck != 0) ans =  sum/luck;

        cout<<floor(ans)<<endl;
    }

    return 0;
}
