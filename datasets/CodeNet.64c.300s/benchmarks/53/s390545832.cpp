#include<iostream>
using namespace std;
int main()
{
    int a,b,c,counter=0;
    cin>>a>>b>>c;
    for(a;a<=b;a++)
    {
        if(c%a==0)
            counter++;
        else
            continue;
    }
    cout<<counter<<endl;
 return 0;
}

