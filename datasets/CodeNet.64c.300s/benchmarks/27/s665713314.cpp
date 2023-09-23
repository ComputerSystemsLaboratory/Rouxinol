#include<iostream>
using namespace std;
int main(){
    while(true){
       int i,j,k,n,x,tem=0;
       cin >> n >> x;
       if(n == 0 && x == 0)break;
       for(i=1;i<=n-2;i++){
           for(j=i+1;j<=n-1;j++){
               for(k=j+1;k<=n;k++){
                   if((i+j+k == x) && (i!=j || j!=k ||i!=k))tem = tem+1;
               }
           }
       }
       cout << tem << endl;
    }
}
