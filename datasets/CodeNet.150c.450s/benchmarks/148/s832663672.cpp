#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,m,r,s,k,c1,c2,c3,c4,i;
    c1=c2=c3=c4=0;
    cin>>n;
    string ch;
    for(i=0;i<n;i++){
        cin>>ch;
        if(ch=="AC")c1++;
        else if(ch=="WA")c2++;
        else if(ch=="RE")c3++;
        else if(ch=="TLE")c4++;
    }
    cout<<"AC x "<<c1<<endl;
    cout<<"WA x "<<c2<<endl;
    cout<<"TLE x "<<c4<<endl;
    cout<<"RE x "<<c3<<endl;
}
