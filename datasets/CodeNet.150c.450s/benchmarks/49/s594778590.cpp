#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  
  int n,score[100],sum;
  
  while(1){
    
    cin >>n;
    
    if(n == 0)break;

    sum=0;
    
    for(int i=0 ; i < n ; i++)cin >>score[i];
    
    sort(score,score+n);
    
    for(int i=1 ; i < n-1 ; i++)sum+=score[i];
    
    cout <<sum/(n-2)<<endl;
    
  }
  
  return 0;
}