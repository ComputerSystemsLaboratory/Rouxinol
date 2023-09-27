#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

typedef long long ll;
const ll mod = 1e9 + 7;
const int N=2000000;
const int M=2000;

void Run()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
ll a[N],b[N];
int main()
{
    Run();
    int n,cnt=0;
    cin>>n;
    for(int x=1;x<100;x++)
    {
        for(int y=1;y<100;y++)
        {
            for(int z=1;z<100;z++)
            {
                int res=x*x+y*y+z*z+z*y+z*x+x*y;
                if(res<=n)
                    b[res]++;
            }
        }
    }
    for(int x=1;x<=n;x++)
        cout<<b[x]<<endl;
}
