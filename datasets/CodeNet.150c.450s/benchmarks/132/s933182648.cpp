//Problem_A
#include <bits/stdc++.h>
using namespace std;

int main(){
   while(1){
      int n, p, kei, name=100, hito[50]= {};
      cin>>n>>p;
      kei = p;
      if(n == 0 && p == 0) break;
 
      while(1){
              for(int j=0;j<n;j++){
                     if(p != 0){
                           hito[j]+=1;
                           p-=1;
                     }
                     else{ 
                           p += hito[j];
                           hito[j] = 0;
                     }
                     if(hito[j] == kei) name = j;
               
                     if(name != 100)  break;
               }
               if(name != 100) break;
       
       }
       cout<<name<<endl;
   }     
   return 0;
}
               

