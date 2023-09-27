#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main()
{   init();
    int n;
    cin>>n;
    int v=n;
    if(n>100)v=100;
    vector<int>vec(n+1);
    for(int i=1;i<v;i++){
        int N=i*i;
        for(int j=1;j<v;j++){
            N=(j*j+i*j+i*i);
            if(N>n)continue;
            for(int x=1;x<v;x++){
                N=j*j+i*j+i*i+x*x+x*j+x*i;
                if(N<=n)vec[N]++;
                else continue;
            }
        }
    }
    for(int i=1;i<=n;i++)cout<<vec[i]<<endl;
    return 0;
}
