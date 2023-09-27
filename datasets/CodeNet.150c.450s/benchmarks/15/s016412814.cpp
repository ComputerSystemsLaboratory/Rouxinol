#include <iostream>
#include <cstdio>

using namespace std;
const int maxn=10000+10;
const int maxq=500+10;
int a[maxn],b[maxq];
int n,q;


void solve()
{

    int sum=0;
    for(int i=0; i<q; i++)
    {
        for(int j=0;j<n;j++)
        {

            if(b[i]==a[j])
            {
                sum++;
                break;
            }



        }
        //if(binary_search(b,b+q,a[i])) sum++;
    }
    printf("%d\n",sum);
}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    for(int i=0; i<n; i++) scanf("%d",&a[i]);

    scanf("%d",&q);
    for(int i=0; i<q; i++) scanf("%d",&b[i]);
    //sort(b,b+q);
    solve();
    return 0;
}