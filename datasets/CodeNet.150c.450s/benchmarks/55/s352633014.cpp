
#include<bits/stdc++.h>
using namespace std;

int main()
{

    string a;
    int sum,i;
    while(cin>>a)
    {
        i=0;
        sum=0;
        if(a[0]==48) break;
        while(a[i]!=0){
        sum=sum+(a[i]-48);
        i++;
        }

        cout<<sum<<endl;
    }


    return 0;
}