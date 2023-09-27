#include <iostream>
using namespace std;

int main()
{
  int n,i;
  int x,a,b,c;
  cin >> n;
  
  for(i=1;i<=n;i++){
    x=i;
    a=x/10;
    b=x/100;
    c=x/1000;

    if(x%3==0){
      cout << " " << i;
    }else if(x%10==3){
      cout << " " << i;
    }else if(a%10==3){
      cout << " " << i;
    }else if(b%10==3){
      cout << " " << i;
    }else if(c%10==3){
      cout << " " << i;
    }
  }
  
  cout << endl;
  
  return 0;
}