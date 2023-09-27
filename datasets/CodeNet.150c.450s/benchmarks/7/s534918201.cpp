#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,s,j,a[10];
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++){
            if(a[i]<a[j])
            {
                s=a[j];
                a[j]=a[i];a[i]=s;
            }
        }
    }
    for(i=0;i<3;i++){
        cout<<a[i]<<endl;
    }
}