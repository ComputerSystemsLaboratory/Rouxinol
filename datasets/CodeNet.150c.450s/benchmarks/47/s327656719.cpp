#include <iostream>
using namespace std;
int main(){
  int W;
  int H;
  int x;
  int y;
  int r;
  cin>>W>>H>>x>>y>>r;
  if(x-r>=0&&y-r>=0&&x+r<=W&&y+r<=H){
    
      
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;

}
  
