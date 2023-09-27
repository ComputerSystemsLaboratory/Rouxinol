#include <bits/stdc++.h>

using namespace std;


int countt(int i,int j,int u){
    if (i==j && i==u)
        return 1;
    if (i!=j && i!=u && j!=u)
        return 6;
    return 3;
}

int solve(int ind){
    int ans=0;
    for (int i=1;i*i<=ind;i++){
        for (int j=i;j*j<=ind;j++){
            for (int u=j;u*u<=ind;u++){
                if (i*i+j*j+u*u+i*j+i*u+j*u==ind)
                    ans+=countt(i,j,u);
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        cout<<solve(i)<<"\n";
    }


    return 0;
}
