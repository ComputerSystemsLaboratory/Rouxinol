#include<iostream>
using namespace std;
int main()
{  int s,h,d,m,s1;
    cin>>s;
    h=s/3600;
    d=s%3600;
    m=d/60;
    s1=d%60;

    cout<<h<<':'<<m<<':'<<s1<<endl;
    return 0;
}

