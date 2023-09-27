#include <iostream>

void call( int n )
{
  int i = 1 ;

  for ( ; i <= n ; ++i ) {
    int x = i ;
    
    bool bMatch = ( x % 3 == 0 ) ;
    for ( ; x && !bMatch ; x /= 10 ) {
      bMatch = ( x % 10 == 3 ) ;
    }
    if ( bMatch )
      std::cout << " " << i ;
  }
  std::cout << std::endl ;
}

int main()
{
  int num ;
  std::cin >> num ;

  call( num ) ;

  return 0 ;
}