#include <bits/stdc++.h>
using namespace std;

int main(){

    while(1){

    int n,ma,mi; cin>>n>>mi>>ma;

    if(n == 0 & ma == 0 && mi == 0) break;

    vector<int> sco(n);

    for(int i=0; i<n; i++){

        cin>>sco[i];

    }

    int ans=0,gap=0;

    for(int i=mi; i<=ma; i++){

        if(sco[i-1] - sco[i] >= gap){

            gap = sco[i-1] - sco[i];

            ans = i;
        }
    }

    cout<<ans<<endl;
   
    }

    return 0;
}
