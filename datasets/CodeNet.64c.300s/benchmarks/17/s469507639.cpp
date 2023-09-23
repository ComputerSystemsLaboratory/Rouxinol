#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  while(1){
    int x,y,s;
    cin>>x>>y>>s;

    if(x==0 && y==0 && s==0)
      break;

    int tmax = -1;

    for(int i=1; i<=s-1; i++){
      int ax = i*(100+x)/100;
      int ay = i*(100+y)/100;

      for(int j=1; j<=s-1; j++){
        int bx = j*(100+x)/100;
        int by = j*(100+y)/100;

        if(ax+bx ==s){
          tmax = max(tmax, ay+by);
        }
        else if(ax+bx>s){
          break;
        }
      }
    }
    cout<<tmax<<endl;
  }
  return 0;
}

