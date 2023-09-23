#include<iostream>

using namespace std;

const int K=3000000;
int p[K];

void furui(){
   for(int i=0; i<K; i++) p[i]=1;
   p[0]=p[1]=0;
   for(int i=2; i*i<=K; i++){
      if(p[i]){
         for(int j=2; i*j<K; j++){
            p[i*j]=0;
         }
      }
   }
}

int main(){

   furui();
   while(1){

      int a, d, n;
      cin>> a>> d>> n;
      if(!(a||d||n)) break;

      int cnt=0;
      while(1){
         if(p[a]) cnt++;
         if(cnt==n) break;
         a+=d;
      }

      cout<< a<< endl;
   }

   return 0;
}