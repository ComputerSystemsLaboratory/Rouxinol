#include <iostream>
using namespace std;

int main(){
  int n;

  while((cin>>n)&&(n!=0)){
    int count=0;
    int c=1;
    while(c!=n/2+1){
      int sum=0;
      for(int i=c;i<=n;i++){
        sum += i;
        if(sum==n) count++;
      }
      c++;
    }
    cout << count << endl;
  }
  return 0;
}