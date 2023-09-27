#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
          ll n,a=0,w=0,t=0,r=0,i;
          cin>>n;
          string s;
          for(i=0;i<n;i++)
          {
                    cin>>s;
                    if(s=="AC")a++;
                    else if(s=="WA")w++;
                    if(s=="TLE")t++;
                    if(s=="RE")r++;
          }
          cout<<"AC x "<<a<<endl;
           cout<<"WA x "<<w<<endl;
            cout<<"TLE x "<<t<<endl;
             cout<<"RE x "<<r<<endl;
}
