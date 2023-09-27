#include<stdio.h>
#include<iostream>

using namespace std;

int main(){

int n;
while(cin>>n,n){
int Ac[10001];
int Bc[10001];
int Ap=0;
int Bp=0;

for(int i=0;i<n;i++)cin>>Ac[i]>>Bc[i];

for(int i=0;i<n;i++){

  if(Ac[i]>Bc[i])Ap+=Ac[i]+Bc[i];
  else if(Ac[i]<Bc[i])Bp+=Ac[i]+Bc[i];
  else if(Ac[i]==Bc[i]){
   Ap+=Ac[i];
   Bp+=Bc[i];
  }
 }

cout<<Ap<<' '<<Bp<<endl;

}

return 0;

}