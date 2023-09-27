#include<iostream>
using namespace std;
int main(){
   char change[]={'S','H','C','D'};
   int n;
   cin>>n;
   bool check[4][13];
   for(int i=0;i<4;++i){
       for(int j=0;j<13;++j) {
           check[i][j]=true;
       }
   }
   int a;
   char b;
   for(int i=0;i<n;++i) {
       cin>>b>>a;
       switch(b){
               case 'S':
               check[0][a-1]=false;
               break;
               case 'H':
               check[1][a-1]=false;
               break;
               case 'C':
               check[2][a-1]=false;
               break;
               case 'D':
               check[3][a-1]=false;
               break;
       }
   }
   for(int i=0;i<4;++i){
       for(int j=0;j<13;++j) {
           if(check[i][j]){
               cout<<change[i]<<' '<<j+1<<endl;
           }
       }
   }
   return 0;
}