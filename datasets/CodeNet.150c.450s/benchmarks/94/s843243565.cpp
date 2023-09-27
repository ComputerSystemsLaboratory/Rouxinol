#include <iostream>
using namespace std;
int main(){
      int n,count=0;
      cin>> n;
      int num[n];
      for(int i= 0;i<n;i++)
            cin>>num[i];
      bool flag=true;
      while(flag){
            flag=false;
            for(int j = n-1 ; j>0;j--){
                  if(num[j]<num[j-1]){
                        swap(num[j],num[j-1]);
                        flag = true;
                        count++;
                  }
            }
      }
      for(int i= 0;i<n-1;i++)
            cout<<num[i]<<" ";
      cout<<num[n-1]<<endl<<count<<endl;
}