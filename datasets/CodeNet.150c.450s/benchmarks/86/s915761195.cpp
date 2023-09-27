#include<iostream>
using namespace std;

int main(){
  int n,m,p;
  double sum;
  double sumg;
  int gold;
  int x[101];

  while(1){
    sum=0;
    sumg=0;
    gold=0;
    cin >> n >> m >> p;
    if(n==0 && m==0 && p==0)break;
    for(int i=0;i<n;i++){
      cin >> x[i];
      sum+=100*x[i];
    }
    sumg=sum-sum*(p*0.01);
    gold=sumg/x[m-1];
    if(x[m-1]!=0){
      cout << gold <<endl;
    }else{
      cout << 0 << endl; 
    }
  }
}