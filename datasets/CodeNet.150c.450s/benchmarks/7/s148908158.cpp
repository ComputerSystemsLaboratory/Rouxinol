#include<iostream>
using namespace std;
#include<algorithm>

int main()
{
    int a[10];
    for(int i=0;i<10;i++)
        cin>>a[i];
    sort(a,a+10);
    for(int j=0;j<3;j++){
        cout<<a[9-j]<<endl;
    }
    return 0;
    
}