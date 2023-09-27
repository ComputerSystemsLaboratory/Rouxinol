#include<iostream>

using namespace std;
int dy[]={0, 1, 0, -1};
int dx[]={-1, 0, 1, 0};

int main(){

   while(1){
      int N;
      cin>> N;
      if(!N) break;

      int n[N], dd[N];
      for(int i=0; i<N-1; i++){
         cin>> n[i]>> dd[i];
      }

      int l, r, u, d;
      l=r=u=d=0;
      int py[N], px[N];
      py[0]=px[0]=0;
      for(int i=0; i<N-1; i++){
         int y=py[n[i]]+dy[dd[i]];
         int x=px[n[i]]+dx[dd[i]];
         l=min(l, x);
         r=max(r, x);
         u=min(u, y);
         d=max(d, y);
         py[i+1]=y; px[i+1]=x;
      }

      cout<< r-l+1<<" "<< d-u+1<< endl;
   }
   return 0;
}