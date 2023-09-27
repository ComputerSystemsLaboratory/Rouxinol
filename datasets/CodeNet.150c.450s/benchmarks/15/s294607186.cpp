#include<iostream>
using namespace std;
int main()
{
   int n;
   while(cin>>n)
   {
        int a[n];
   for(int i=0;i<n;i++)
       cin>>a[i];
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
        cin>>b[i];
        int t=0;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
               {
                    if(b[i]==a[j])
                    {
                        t++;
                         break;
                    }
                    else
                        continue;
                }
    cout<<t<<endl;
   }

    return 0;
}