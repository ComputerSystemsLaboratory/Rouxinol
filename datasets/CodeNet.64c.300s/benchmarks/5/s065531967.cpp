#include<iostream>
  using namespace std;
   int main(){
      int a[10];
      int temp;
      for(int m=0; m<10; m++)
      {
          cin >> a[m];
      }
    temp=a[0];
      for(int i=0; i<10; i++)
      {
          for(int j=0; j<10;j++)
          {
          if(a[i] > a[j])
          {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          }
        }
      }
      for(int k=0; k<3; k++)
      {
          cout << a[k]<< endl;
      }
   }