#include "iostream"
#include "cmath"
using namespace std;

bool prime(int a){
  if(a==1)return false;
  int i,limit = sqrt(a);
  for(i=2;i<=limit;++i){
    if(a%i==0)break;
  }
  if(i==limit+1)return true;
  else return false;
}


int main(){
  int a,d,n,count,i;
  while(true){
    count=0;
    cin >>a>>d>>n;
    if(!a&&!d&&!n)break;
    for(i=0;;++i){
      if(prime(a+d*i))++count;
      if(count==n)break;
    }
    cout << a+d*i <<endl;
  }
  return 0;
}