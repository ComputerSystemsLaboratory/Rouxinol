#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
        cout<<"a > b"<<endl;
    else
        if(a==b)
            printf("a == b\n");
        else
            printf("a < b\n");
    return 0;
}
