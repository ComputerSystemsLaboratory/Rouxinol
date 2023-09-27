#include<iostream>
using namespace std;
int main(){
  int i,k;
  k=0;
  int a,b;
  int suma[99]={0};
  int sumb[99]={0};
  while(1){
    int n;
    cin>>n;
    if(n==0) break;
    for(i=0;i<n;i++){
      cin>>a>>b;
      if(a>b) suma[k]=a+b+suma[k];
      if(a<b) sumb[k]=a+b+sumb[k];
      if(a==b){
        suma[k]=a+suma[k];
        sumb[k]=b+sumb[k];
      }
  }
  k++;
 }
  for (i = 0; i < k;i++) {
   cout<<suma[i]<<" "<<sumb[i]<<endl;
 }
 return 0;
}