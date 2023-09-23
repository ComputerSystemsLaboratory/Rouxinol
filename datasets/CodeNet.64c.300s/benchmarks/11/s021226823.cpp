#include<iostream>
using namespace std;

int main()
{
    int s,h,m;
    cin>>s>>m>>h;
    cout<<s/3600<< ":" <<(s%3600)/60<< ":" <<(s%60)<<endl;
    return 0;
}
