#include<iostream>
using namespace std;

int main(){
 while(true){
  int m, n_min, n_max;
  cin >> m >> n_min >> n_max;
  if(m==0 && n_min==0 && n_max==0) break;

  int P[m];
  for(int i=0; i<m; i++){
   cin >> P[i];
  }

  int gap = -1;
  int n = -1;
 
  for(int i=n_min; i<=n_max; i++){
   int g = P[i-1]-P[i];
   if(gap<=g){
    gap = g;
    n = i;
   }
  }
  
  cout << n << endl;
 }

 return 0;
}
   
