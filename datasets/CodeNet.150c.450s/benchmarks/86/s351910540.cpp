#include<iostream>
using namespace std;

int main(){
  int n,m,p,x[100],total;
  while(1){
    cin>>n>>m>>p;

    if(!(n||m||p))break;

    total=0;
    for(int i=0; i<n; i++) cin>>x[i],total+=x[i];

    if(x[m-1]!=0) total = total*(100-p)/x[m-1] ;
    else total = 0;
    cout<< total <<endl;
  }
}