#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    if(a[0]>a[1])swap(a[0],a[1]);
    if(a[1]>a[2])swap(a[1],a[2]);
    if(a[0]>a[1])swap(a[0],a[1]);
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
}
