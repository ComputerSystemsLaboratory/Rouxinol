#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int s[7];
int k;
string c;
void  f(int k)
{
    if(c[k]=='S')
    {
       int t=s[1];
       s[1]=s[3];
       s[3]=s[6];
       s[6]=s[2];
       s[2]=t;
    }
      if(c[k]=='N')
    {
       int t=s[3];
       s[3]=s[1];
       s[1]=s[2];
       s[2]=s[6];
       s[6]=t;
    }
        if(c[k]=='W')
    {
       int t=s[1];
       s[1]=s[5];
       s[5]=s[6];
       s[6]=s[4];
       s[4]=t;
    }
          if(c[k]=='E')
    {
       int t=s[1];
       s[1]=s[4];
       s[4]=s[6];
       s[6]=s[5];
       s[5]=t;
    }
}
int main()
{
   // for(int i=0;i<6;i++)

        cin>>s[1];
        cin>>s[2];
        cin>>s[5];
        cin>>s[4];
        cin>>s[3];
        cin>>s[6];

//  for(int i=1;i<=6;i++)  cout<<s[i]<<' ';
    cin>>c;
    for(int i=0;i<c.size();i++)
    {
        f(i);
    }
    cout<<s[1]<<endl;
    return 0;
}

