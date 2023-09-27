#include <iostream>
#include <vector>
using namespace std;
struct P{
  int x,y;
};

int main(){
  P p;
  int x,y;
  int n,m;
  vector<P> v;
  char c;
  int l;
  int dx,dy;
  while( cin>>n && n ){
    v.clear();
    for( int i=0;i<n;i++ ){
      cin >> p.x >> p.y;
      v.push_back( p );
    }
    x=10;
    y=10;
    cin >> m;
    for( int i=0;i<m;i++ ){
      cin >> c >> l;
      dx=0; dy=0;
      switch(c){
      case 'N': dy=1;  break;
      case 'E': dx=1;  break;
      case 'S': dy=-1; break;
      case 'W': dx=-1; break;
      }

      for( int k=0;k<l;k++ ){
	x+=dx; y+=dy;
	for( unsigned int j=0;j<v.size();j++ ){
	  if( v[j].x==x && v[j].y==y ){
	    v.erase( v.begin()+j );
	    break;
	  }
	}
      }
    }
    if( v.size() )
      cout << "No" << endl;
    else
      cout << "Yes" << endl;
  }

  return 0;
}