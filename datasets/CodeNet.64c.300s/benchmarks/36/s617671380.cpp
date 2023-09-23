#include<iostream>
using namespace std;
int main()
{  int i,t,j;
int a[3];
for(i=0;i<3;i++)
{
    cin>>a[i];
}
   for(i=0;i<3;i++)
   {
    for(j=i+1;j<3;j++)
    {
      if(a[i]>a[j])
      {
          t=a[i];
          a[i]=a[j];
          a[j]=t;
      }
    }
   }
   for(i=0;i<3;i++)
   {
       if(i==2)
            cout<<a[i]<<endl;
       else
            cout<<a[i]<<' ';


   }

    return 0;
}

