#include<iostream>

int day_of_month( int m )
{
	switch( m ){
	 	case 2:
			return 29;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
			break;
		default:
			return 31;
			break;
	}
}

int main()
{
	int m,d;
	const char week[][20] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	
	while( 1 ){
		std::cin >> m >> d;
		if( !m && !d ) break;
		
		int nm = 1, nd = 1, nw = 3;
		while( 1 ){
			if( nm == m && nd == d ) break;
			nd++;
			nw = ( nw + 1 ) % 7;
			
			if( nd > day_of_month( nm ) ){
			 	nd = 1;
				nm++;
			}
		}
		
		std::cout << week[nw] << std::endl;
	}

 	return 0;
}