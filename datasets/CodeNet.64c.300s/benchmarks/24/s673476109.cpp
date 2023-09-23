#include<iostream>

int n;
int a, b;
int res[2];

int main()
{
	while( 1 ){
		std::cin >> n;
		
		if( !n ) break;
		
		res[0] = res[1] = 0;
		
		while( n-- ){
			std::cin >> a >> b;
		 	if( a == b ){
			 	res[0] += a;
				res[1] += b;
			}
			else if( a > b ){
			 	res[0] += a + b;
			}
			else{
			 	res[1] += a + b;
			}
		}
		
		std::cout << res[0] << " " << res[1] << std::endl;
	}

 	return 0;
}