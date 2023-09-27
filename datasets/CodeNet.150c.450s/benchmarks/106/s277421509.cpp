#include<iostream>
using namespace std;
int main(){
     int a,b,c;
     int ans,count=0;

     cin >> a >> b >> c;
     for(int i=1;i<=c;i++){
          if(c%i==0){
               ans=c/i;
               if(ans>=a && ans<=b){
                    count++;
               }
          }
     }
     cout << count << endl;
     return 0;
}