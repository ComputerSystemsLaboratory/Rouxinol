#include <iostream>
using namespace std;

int a[45];
int n;
int main()
{
    cin>>n;
    int i;
    for(i=0;i<=n;i++){
        if(i==0||i==1)a[i]=1;
        else{
            a[i]=a[i-1]+a[i-2];
        }
    }
    cout<<a[n]<<endl;
    return 0;
}