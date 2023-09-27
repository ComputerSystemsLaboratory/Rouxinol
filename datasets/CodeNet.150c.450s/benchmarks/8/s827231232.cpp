#include<iostream>
using namespace std;

int main()
{
  int x=0,y=0,n;
  string X,Y;

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>X>>Y;
    if(X==Y){
      x++;
      y++;
    }
    else if(X>Y)x+=3;
    else y+=3;
  }
  cout<<x<<" "<<y<<endl;
  return 0;
}