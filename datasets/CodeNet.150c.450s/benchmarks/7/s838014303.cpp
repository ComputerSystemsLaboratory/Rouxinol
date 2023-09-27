#include <iostream>
using namespace std ;
int main()
{
int a[10] ;
while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8]>>a[9]){
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10-1;j++)
        {
            if(a[j+1]>a[j])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
        cout<<a[0]<<endl<<a[1]<<endl<<a[2]<<endl;  
  }
    
}