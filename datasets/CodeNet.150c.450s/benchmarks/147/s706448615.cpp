#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[10051]={0};
          for(int j=1;j<=105;j++)
          {
              for(int k=1;k<=105;k++ )
              {
                  for(int l=1;l<=105;l++)
                  {
                      if(j*j+k*k+l*l+j*k+k*l+l*j<=10050)
                        a[j*j+k*k+l*l+j*k+k*l+l*j]++;

                  }
              }
          }
       for(int i=1;i<=n;i++)
        cout<<a[i]<<endl;
}
