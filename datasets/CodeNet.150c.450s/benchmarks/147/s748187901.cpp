#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int n;
    map<int,int>m;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            for(int k=1;k<=n-j;k++){
                int v=i*i+j*j+k*k+i*j+j*k+k*i;
                if(v>n)
                    break;
                
                m[v]++;
            }
        }
    }

    for(int i=1;i<=n;i++){
        cout<<m[i]<<endl;
    }

}
