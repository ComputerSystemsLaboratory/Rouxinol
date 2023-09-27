#include <iostream>
using namespace std;
int main(void){
   int r, c;
   int x[101][101]={};
   cin>>r>>c;
   for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
           cin>>x[i][j];
           cout<<x[i][j]<<" ";
           x[r][j]+=x[i][j];
           x[i][c]+=x[i][j];
       }
       cout<<x[i][c]<<endl;
       x[r][c]+=x[i][c];
   }
   for(int j=0;j<c;j++){
       cout<<x[r][j]<<" ";
   }
   cout<<x[r][c]<<endl;
   
}

