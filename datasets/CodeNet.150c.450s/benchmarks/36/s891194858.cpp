#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,ans=0;
    while(cin>>n){
        for(int i=n;i<600;i+=n)ans+=n*i*i;
        cout<<ans<<endl;
        ans=0;
    }
}