#include <iostream>
using namespace std;


int main()
{
	int i,count1,count2,ind1,ind2;
	float x[3],y[3],xp,yp;
	while( cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> xp >> yp ) {
		count1 = 0;
		count2 = 0;
		for( i = 0; i < 3; i++ ) {
			ind1 = i;
			ind2 = ( (i+1) % 3);
			if( ( ( xp -x[ind1] ) *( yp-y[ind2]) - (xp-x[ind2])*(yp-y[ind1]) ) < 0 ){
				count1 ++;
			}
			else if( ( ( xp -x[ind1] ) *( yp-y[ind2]) - (xp-x[ind2])*(yp-y[ind1]) ) > 0 ){
				count2 ++;
			}
		}
		if( count1 == 3 || count2 == 3 )
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}


	return 0;
}