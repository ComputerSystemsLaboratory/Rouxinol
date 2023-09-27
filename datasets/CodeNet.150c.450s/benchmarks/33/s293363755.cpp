#include <iostream>

//int moto(int y, int x)
//{
//	int p;
//	double a = y * 100;
//	a /= (100 + x);
//	
//	if ( a - int(a) > 1.0e-20 ) p = int(a) + 1;
//	else p = int(a);
//
//	return a;
//}

int saki(int p, int x)
{
	return p * (100 + x) / 100.;
}

int main()
{
	while(true){
		int x, y, s;

		std::cin >> x >> y >> s;

		if ( x == 0 && y == 0 && s == 0 ) break;

		int max = 0;
//		for ( int i = 1; i < s; ++i ) {
//			int j = s - i;
//
//			int moto_j = moto(j, x);
//			int moto_i = moto(i, x);
//
//			if ( moto_j == 13 ) {
//				std::cout << j << " " << i << std::endl;
//				std::cout << moto_j << " " << moto_i << " " << saki(moto_j, y) << " " << saki(moto_i, y) << std::endl;
//			}
//			int a = saki(moto_i, y) + saki(moto_j, y);
//			if ( max < a ) max = a;
//		}
//
	
		for ( int i = 1; i <= 1000; ++i ) {
			for ( int j = 1; j <= 1000; ++j ) {
				if ( i < j ) continue;
				if ( saki(i, x) + saki(j, x) == s ) {
					int a = saki(i, y) + saki(j, y);
					if ( max < a ) max = a;
				}
			}
		}

		std::cout << max << std::endl;
	}
	return 0;
}