#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
     int a[10],i,judge;
     for(i=0;i<10;i++) cin >> a[i];
     judge = 0;
     do{
       judge = 1;
       for(i=0;i<9;i++){
         if(a[i]<a[i+1]){
           swap(a[i],a[i+1]);
           judge = 0;
         }
       }
     }while(!judge);
 
     for(i=0;i<3;i++)
       cout << a[i] << endl;
 
   return 0;
}