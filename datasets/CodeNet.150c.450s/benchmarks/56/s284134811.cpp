#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int n;

  cin >> n;
  long *data = new long[n];
  long min,max,sum=0;

  for(int i=0; i<n; i++){
    cin >> data[i];
    
    if(i==0){
      min=max=sum=data[0];
    }else{
      if(min>data[i]){
        min=data[i];
      }
      if(max<data[i]){
        max=data[i];
      }
      sum += data[i];
    }
  }

  cout << min << " " << max << " " << sum << endl;
  
  return(0);
}