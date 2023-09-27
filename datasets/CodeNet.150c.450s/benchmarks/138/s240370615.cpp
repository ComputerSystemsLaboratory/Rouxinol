#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;    cin>>a>>b;


    int big=max(a,b);
    int small=min(a,b);

    int ans=small;

    while(big%small!=0){
        int amari=big%small;
        big=small;
        small=amari;

        ans=small;

    }

    cout<<ans<<endl;

    return 0;
}

