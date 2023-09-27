
#include<bits/stdc++.h>

using namespace std;

const int maxn=1e5+5;

int n,a[maxn],l[maxn];

int lis()
{
    l[0]=a[0];
    int length=1;
    for(int i=1;i<n;i++){
        if(l[length-1]<a[i]){
            l[length++]=a[i];
        }else{
            *lower_bound(l,l+length,a[i])=a[i];
        }
    }
    return length;
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<lis()<<endl;
    return 0;
}

