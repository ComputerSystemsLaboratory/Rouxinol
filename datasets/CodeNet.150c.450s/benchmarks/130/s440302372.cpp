#include <iostream>
using namespace std;
int main(void){
   int n, m;
   cin>>n>>m;
   int x[n][m],y[m],v;
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cin>>x[i][j];
       }
   }
   for(int i=0;i<m;i++){
       cin>>y[i];
   }
   for(int i=0;i<n;i++){
       v=0;
       for(int j=0;j<m;j++){
           v+=x[i][j]*y[j];
           
       }
       cout<<v<<endl;
   }
}

