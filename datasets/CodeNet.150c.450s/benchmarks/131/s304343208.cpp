#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int a[30],l;
    while(cin>>a[0]>>l)
    {if(a[0]==0&&l==0)break;
        char q[10];
        for(int k=1;k<=20;k++)
        {
            for(int i=0;i<l;i++)
            {
                int r=1,u=0;
                while((u++)!=i)r*=10;
                q[i]=(a[k-1]/r)%10+'0';
            }
            sort(q,q+l);
            int x=0,y=0;
            for(int i=0;i<l;i++)
            {
                x+=(q[i]-'0')*(int )(pow((double)10,(double)(l-i-1)));
                y+=(q[i]-'0')*(int )(pow((double )10,(double )i));
            }
            a[k]=y-x;
        }
        int flag=1,w,e;
        for(int i=0;flag&&i<=20;i++)
        {
            for(int j=i+1;flag&&j<=20;j++)
            {
                if(a[i]==a[j])
                {
                    flag=0;
                    w=i;e=j-w;
                }
            }
        }
        cout<<w<<" "<<a[w]<<" "<<e<<endl;
    }
    return 0;
}