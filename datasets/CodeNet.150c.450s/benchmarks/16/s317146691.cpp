#include <iostream>
using namespace std;
int main()
{
    signed char t[20002];
    int out[20002],in[20002];
    int i,j,k,n,max,min,x1=-1,c=0,sum=0;
    cin>>t;
    //for(i=1;t[i-1]!='\0';i++)
       // in[i] = t[i];
    in[0]=0;
    for(i=0;i<20002;i++)
        out[i] = 0;
    for(i=0;t[i]!='\0';i++)
    {
        if(t[i]=='\\')
            t[i] = -1;
        else if(t[i]=='_')
            t[i] = 0;
        else
            t[i] = 1;
        in[i+1] = in[i] + t[i];
    }
    n = i+1;//length of int array
    max = min = 0;
    for(i=0;i<n;i++)
    {
        if(in[i]<min)
            min = in[i];
        if(in[i]>max)
            max = in[i];
    }
    for(i=max;i>=min;i--)
    {
        x1 = -1;
        for(j=0;j<n;j++)
        {
            if(in[j]==i)
            {
                if(x1==-1)
                    x1 = j;
                else if(in[x1]>in[x1+1])
                {
                    out[j] = 0;
                    for(k=x1;k<=j;k++)
                    {
                        out[j] +=  i-in[k];
                        in[k] = i;
                    }
                    c++;
                    sum += out[j];
                }
                x1 = j;
             }
        }
    }
    cout<<sum<<endl;
    cout<<c;
    for(i=0;i<20002;i++)
    {
        if(out[i]!=0)
            cout<<' '<<out[i];
    }
    cout<<endl;
    return 0;
}