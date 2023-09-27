#include <iostream>
using namespace std;

int main()
{
  int h,f=-1,s=-1,t=-1;
  
  for(int i=0;i<10;i++){
    cin >> h;
    if(h>f){
      t=s;
      s=f;
      f=h;
    }else if(h>s){
      t=s;
      s=h;
    }else if(h>t){
      t=h;
    }
  }
  cout << f << endl << s << endl << t << endl;
  return 0;
}