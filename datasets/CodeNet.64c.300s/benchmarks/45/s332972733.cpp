#include<cstdio>
#include<iostream>

using namespace std;

int getDividend(int n, int m, int p,int array[]){
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=array[i]*100;
  }
  sum -= sum * p / (double)100;
  return (array[m-1]==0) ? 0 : sum/array[m-1];
}

int main(){
  
  while(1){
    int n,m,p,N;
    int array[100];    
    cin >> n >> m >>p;
    if(n+m+p==0) break;
    for(int i=0; i<n; i++){
      cin >> array[i];
    }
    cout << getDividend(n,m,p,array) << endl;
  }

  return 0;
}