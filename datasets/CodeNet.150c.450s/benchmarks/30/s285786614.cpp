#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int x,y,z;
   long long int count=0;
   int arr[1000];
   cin>>x;
   for(int i=0;i<x;i++){
    cin>>arr[i];
   }
   for(int i=0;i<x;i++){
        int ck=i;
        for(int j=i;j<x;j++){
            if(arr[j]<arr[ck]){
                ck=j;//count++;

            }

        }
         swap(arr[i],arr[ck]);
         if(i!=ck){
           count++;
         }
   }
   for(int i=0,ck=1;i<x;i++,ck++){
    cout<<arr[i];
    if(ck!=x){
        cout<<" ";
    }
   }
   cout<<endl;
    cout<<count<<endl;;
    return 0;
}