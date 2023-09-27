#include <iostream>
using namespace std;
class Sq{
public: int x,y;
};

int main(){
  int N;
  int n,d;
  Sq sq[200];

  while( true ){
    cin >> N;
    if( !N ) break;

    sq[0].x=0; sq[0].y=0;
    int xmin=0,ymin=0, xmax=0,ymax=0;
    for( int i=1;i<N;i++ ){
      cin >> n >> d;
      sq[i].x=sq[n].x; sq[i].y=sq[n].y;      
      if( d==0 ) sq[i].x--;
      else if( d==1 ) sq[i].y--;
      else if( d==2 ) sq[i].x++;
      else sq[i].y++;

      if( xmin>sq[i].x ) xmin=sq[i].x;
      else if( xmax<sq[i].x ) xmax=sq[i].x;
      else if( ymin>sq[i].y ) ymin=sq[i].y;
      else if( ymax<sq[i].y ) ymax=sq[i].y;
    }
    cout << (xmax-xmin+1) << " "<<(ymax-ymin+1)<<endl;
  }
  return 0;
}