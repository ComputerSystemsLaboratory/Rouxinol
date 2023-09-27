#include<iostream>
using namespace std;
int main()
{
    int a[5],temp;
    for(int i=0;i<5;i++)
        {
            cin>>a[i];
        }

    for(int i =0;i<5;i++)
        {
            for(int j=0;j<5;j++)
                {
                    if(a[i]>a[j])
                      {
                            temp = a[i];
                            a[i] = a[j];
                            a[j] = temp;
                      }
                }
        }

                for(int i=0;i<5;i++)
                {
                    if (i==4)
                        cout<<a[i]<<endl;
                    else
                        cout<<a[i]<<" ";
                }

                return 0;
}