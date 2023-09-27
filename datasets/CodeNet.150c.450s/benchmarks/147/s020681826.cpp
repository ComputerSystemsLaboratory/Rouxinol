#include<bits/stdc++.h>
using namespace std;
#define ll  unsigned long long int
#define pb push_back
#define sx 300007
int main()
{
    map<int,int> m;
    int n ;
    cin>>n;
    for(int i=1; i<=10000; i++)
    {
        int ans=(i*i)+(1*1)+(1*1)+(i*1)+(1*1)+(i*1);
        if(ans>10000)
            break;
        for(int j=1; 1; j++)
        {
            int ans=(i*i)+(j*j)+(1*1)+(i*j)+(j*1)+(i*1);
            if(ans>10000)
                break;
            for(int k=1; 1; k++)
            {
                int ans=(i*i)+(j*j)+(k*k)+(i*j)+(j*k)+(k*i);
                m[ans]++;
                if(ans>10000)
                    break;
            }
        }
    }
    for(int i=1;i<=n;i++)
        cout<<m[i]<<endl;
    return 0;
}
