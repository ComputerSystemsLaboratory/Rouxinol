#include <algorithm>
#include <deque>
#include <iostream>
#include <functional>

using namespace std;

int main()
{
		int i, num;
        deque< int > index;
		int d[5];
		cin >> d[0] >> d[1] >> d[2] >> d[3] >> d[4];	   
	    for ( i = 0; i < 5; i++ ) {
              index.push_back( d[i] );
       }
       sort( index.begin(), index.end(), greater< int >() );

       deque< int >::iterator it = index.begin();
        for ( i = 0; i < 5; i++ ) {
              cout << *it;
			  if( i != 4 ){
				  cout << " ";
			  }
              it++;
       }
		cout << endl;

        return 0;
}