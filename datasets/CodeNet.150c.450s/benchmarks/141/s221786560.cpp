#include <cstdio>
#include <cstdlib>
#include <cmath>
#define STRMAX 200
#define PNUM 3 

using namespace std;

class Point{
  public:
    double x, y;
  public:
    bool isLeft( Point *p, Point *q );
};
enum State{
  NONE,
  LEFT,
  RIGHT
};
bool Point::isLeft( Point *p, Point *q ){
  double x1 = p->x - this->x;
  double x2 = q->x - this->x;
  double y1 = p->y - this->y;
  double y2 = q->y - this->y;
  return (x1 * y2 - x2 * y1 > 0) ? true : false;
}

void c2s( char str[] ){
  for( int i = 0; str[ i ] != '\0'; i++ ){
    str[ i ] = ( ( str[ i ] == ',' ) ? ' ' : str[ i ] );
  }
}

int main(){
  char str[ STRMAX ];
  Point *p[ PNUM ] = { NULL, NULL, NULL };
  Point *pp;
  while( 1 ){
      for( int i = 0; i < PNUM; i++ ){
        if( p[ i ] == NULL ){  delete p[ i ]; }
        p[ i ] = new Point();
      }
      if( pp == NULL ){ delete pp; }
      pp = new Point();
      if( 
          scanf(
            "%lf%lf%lf%lf%lf%lf%lf%lf", 
            &(p[ 0 ]->x), 
            &(p[ 0 ]->y), 
            &(p[ 1 ]->x), 
            &(p[ 1 ]->y), 
            &(p[ 2 ]->x), 
            &(p[ 2 ]->y),
            &(pp->x), &(pp->y)
          ) == EOF
      ){ break; }
     State state = NONE;
     bool ok = true;
     for( int i = 0; i < PNUM; i++ ){
        State s = LEFT;
        if( !pp->isLeft( p[i%PNUM], p[(i+1)%PNUM] ) ){
          s = RIGHT;
        }
        if( state != NONE && state != s ){
          ok = false;
          break;
        }
        state = s;
     }
     puts( ok ? "YES" : "NO" );
  }

  return EXIT_SUCCESS;
}