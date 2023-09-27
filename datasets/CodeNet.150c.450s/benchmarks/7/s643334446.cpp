#include<bits/stdc++.h>
#define LL  long long int
using namespace std;
LL a[100000];

int main()
{
    LL k,i;
    k = 10;
    for(i=0;i<k;i++)
        cin>>a[i];
    sort(a,a+k);
    for(i=k-1;i>=k-3;i--)
        cout<<a[i]<<endl;
    return 0;
}