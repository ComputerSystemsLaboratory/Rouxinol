#include<iostream>
#include<algorithm>

int length[3], length_max, n;

int main(void)
{
	std::cin >> n;

	while(n){
		std::cin >> length[0] >> length[1] >> length[2];

		length_max = *( std::max_element( length, length + sizeof( length ) / sizeof( length[0] )));

		std::cout << ( length_max * length_max == length[0] * length[0] + length[1] * length[1] + length[2] * length[2] - length_max * length_max ? "YES" : "NO" ) << std::endl;

		n--;
	}
	
	return 0;
}