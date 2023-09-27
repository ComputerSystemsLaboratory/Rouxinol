#include<algorithm>
#include<iostream>
#include<vector>

std::vector<int> a, b;
int hit, blow;

int main()
{
	while( 1 ){
		hit = blow = 0;
		a.clear();
		b.clear();
		
		for( int i = 0; i < 4; i++ ){
			int n;
			if( !( std::cin >> n ) ) goto end;
			a.push_back( n );
		}
		
		for( int i = 0; i < 4; i++ ){
			int n;
			if( !( std::cin >> n ) ) goto end;
			b.push_back( n );
		}
		
		for( int i = 0; i < 4; i++ ){
		 	if( a[i] == b[i] ){
			 	hit++;
			}
		}
		
		for( int i = 0; i < 4; i++ ){
			blow += std::count( a.begin(), a.end(), b[i] );
		}
		blow -= hit;
		
		std::cout << hit << " " << blow << std::endl;
	}

end:

 	return 0;
}