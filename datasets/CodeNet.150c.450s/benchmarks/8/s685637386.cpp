#include <iostream>
#include <cstring>

using namespace std;

int n;
char s[105],*p,*q,sep[]=" ";
int t,h;

int main()
{
    cin>>n;
    cin.get();
    for(int i=1;i<=n;++i)
        {
         cin.getline(s,105);
         p=strtok(s,sep);
         q=strtok(NULL,sep);
         if(strcmp(p,q)<0) h+=3;
          else if(strcmp(p,q)>0) t+=3;
                else
                    {
                     h++;
                     t++;
                    }
        }
    cout<<t<<" "<<h<<"\n";
    return 0;
}

