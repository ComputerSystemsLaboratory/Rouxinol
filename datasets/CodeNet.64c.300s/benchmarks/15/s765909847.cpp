#include <iostream>
using namespace std;
int main(){
      int n,count=0,min;
      cin>> n;
      int num[n];
      for(int i = 0;i <n;i++)
            cin>>num[i];
      for(int i= 0;i<n;i++){
            min = i;
            for(int j = i;j<n;j++){
                  if(num[j]<num[min])
                        min = j;
            }
            if(i != min)
                  count++;
            swap(num[i],num[min]);
      }
      for(int i=0;i<n-1;i++)
            cout<<num[i]<<" ";
      cout<<num[n-1]<<endl<<count<<endl;
}