#include<iostream>
using namespace std;
int main(){
  int n,pointA,pointB;
  int a[10000],b[10000];
  pointA = 0; pointB = 0;
  for(n = 1;n != 0;){  
 cin >> n;
 if(n != 0){
    pointA = 0; pointB = 0;
  for(int i = 0;i < n;i++){
    cin >> a[i] >> b[i];
  }
  for(int i = 0;i< n;i++){
    
    if(a[i] < b[i]){
      pointB = pointB + a[i] +b[i];
    } else if(a[i] > b[i]){
      pointA = pointA + a[i] +b[i];
    } else if(a[i] == b[i]){
      pointA = pointA + a[i];
      pointB = pointB + b[i];
    }
  }
 
  cout << pointA << " "<< pointB << endl;
 }
  }
  
  
}