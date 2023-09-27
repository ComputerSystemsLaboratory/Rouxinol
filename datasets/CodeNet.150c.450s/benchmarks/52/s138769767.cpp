#include<iostream>
#include<cstdio>

using namespace std;

int main(){
 	
  int t=0,p,m,n[10];
 while(cin>>m){

   if(m!=0){n[t]=m;t++;}
   if(m==0){cout<<n[t-1]<<endl;n[t]=11;t--;}
}

return 0;
}