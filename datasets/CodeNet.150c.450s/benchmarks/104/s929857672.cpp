#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
  int w,n,a[30],b[30],result[30];
  for(int i=0;i<30;i++){
    result[i]=i+1;
  }
  
  cin >>w>>n;
  for(int i=0;i<n;i++){
    scanf("%d,%d",&a[i],&b[i]);
    swap(result[a[i]-1],result[b[i]-1]);
  }

  for(int i=0;i<w;i++) cout <<result[i]<<endl;
 
  return 0;
}
    
   