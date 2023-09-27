#include <iostream>
#include <algorithm>

using namespace std;


int main()
{unsigned int b[10];

for (int i=0;i<10;i++)
    {
      cin>>b[i];
      }
for (int j=0;j<10;j++)
    {
     for (int k=0;k<10-j;k++)
         {
          if (b[k]>b[k+1])swap(b[k],b[k+1]);
          }
        }

      cout<<b[10]<<endl;
      cout<<b[9]<<endl;
      cout<<b[8]<<endl;

    return 0;
}