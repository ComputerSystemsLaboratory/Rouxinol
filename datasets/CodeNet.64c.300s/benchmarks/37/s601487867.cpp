#include<iostream>
using namespace std;

int main(){
  int n,i,j,count;
  while(1){
    count=0;
    cin >> n;
    if(n==0)break;

    for(i = 1; i <=n; i++){
    int total = 0;
    total += i;
      for(j = i+1; j <=n; j++){
      total +=  j;
    
      if(total==n){
	count++;
	break;
	  
      }
    }

  
    }
  cout << count << endl;
  }
  
  return 0;
}