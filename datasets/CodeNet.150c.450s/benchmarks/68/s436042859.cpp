#include<iostream>
using namespace std;

int main(){
 int n;
 
 while(1){
  cin >> n;
  if(n==0) break;

  int a[n];
  for(int i=0; i<n; i++){
   cin >> a[i];
  }

  int min = 1000000;
  for(int j=0; j<n-1; j++){
   for(int i=j+1; i<n; i++){
    if(a[j]>=a[i] && a[j]-a[i]<min){
     min = a[j]-a[i];
    }else if(a[j]<a[i] && a[i]-a[j]<min){
     min = a[i]-a[j];
    }
   }
  }

  cout << min <<endl;
 }

 return 0;
}

 