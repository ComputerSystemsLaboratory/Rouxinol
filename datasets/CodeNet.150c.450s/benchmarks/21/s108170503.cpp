#include<iostream>
#include<math.h>
using namespace std;
class Xcubic{
public:
  int cal(int x){
    int res=(int)pow(x,3);
    return res;
  }
};
int main(){
  int x;
  cin>>x;
  Xcubic xcubic;
  cout<<xcubic.cal(x)<<endl;
  return 0;
}