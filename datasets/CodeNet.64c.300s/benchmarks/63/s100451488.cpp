#include <iostream>
using namespace std;

int gcd(int x,int y){
  if(x%y==0) return y;
  else{
    int z=x%y;
    return gcd(y,z);
  }
}

int main()
{
  int a,b;
  int g;
  long int l;
  while(cin >> a >> b){
  
    if(a>b) g=gcd(a,b);
    else if(a<b) g=gcd(b,a);
    else g=a;

    l=(long int)a*b/g;
    cout << g << " " << l << endl;
  }

  return 0;
}