#include <iostream>
#include <algorithm>
#define MAX 200
using namespace std;

int dx[] = { -1 , 0 , 1 , 0 };
int dy[] = {  0 , -1, 0 , 1 };

int main(void){

  int ml,mr,mu,md;
  int x[MAX];
  int y[MAX];
  int N;
  int p,q;

  while(1){

    ml = mr = mu = md = 0;

    for( int i = 0 ; i < MAX ; i++ ){       /*初期化*/
      x[i] = 0;
      y[i] = 0;
    }

    cin >> N;
    if( N == 0 )break;

    for( int i = 1 ; i < N ; i++ ){

      cin >> p >> q;

      x[i] = x[p] + dx[q];
      y[i] = y[p] + dy[q];

      mu = max( mu , y[i] );
      md = min( md , y[i] );
      mr = max( mr , x[i] );
      ml = min( ml , x[i] );

    }
    cout << mr - ml + 1 << " " << mu - md + 1 << endl;
  }
  return 0;
}