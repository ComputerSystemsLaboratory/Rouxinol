#include <iostream>
#include <cstring>
using namespace std;

int n;
int a[2000005];
int c[10005];
int b[2000005];

int main()
{
    cin>>n;
    int i,j;
    memset(c,0,sizeof(c));
    for(i=0;i<n;i++){cin>>a[i];c[a[i]]++;}
    for(i=1;i<=10000;i++){c[i]+=c[i-1];}
    for(i=n-1;i>=0;i--){
        b[c[a[i]]]=a[i];
        c[a[i]]--;
    }
    for(i=1;i<=n;i++){
        cout<<b[i];
        if(i!=n)cout<<" ";
    }
    cout<<endl;
    return 0;
}