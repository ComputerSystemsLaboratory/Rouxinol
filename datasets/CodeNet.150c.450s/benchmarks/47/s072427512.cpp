#include <iostream>
using namespace std;
int main(void){
  int W;
  int H;
  int x;
  int y;
 int r;
  cin>>W;
  cin>>H;
  cin>>x;
  cin>>y;  
  cin>>r;
  


  

  
  if((x-r)>=0&&(x+r)<=W&&(y-r)>=0&&(y+r)<=H){
      cout<<"Yes"<<endl;
  }
  else{
      cout<<"No"<<endl;
  }

}
