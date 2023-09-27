#include <iostream>
using namespace std;
int main(){
  int i,max,min,a,sum;
  min=10000;
  max=1;
  sum=0;
  for(i=0;i<3;i++){
    cin >>a;
    sum+=a;
    if(max<a)max=a;
    if(min>a)min=a;
  }
  cout<<min<<" "<<sum-min-max<<" "<<max<<endl;
  return 0;
}
    